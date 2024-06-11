%% PROJETO CONTROLADOR RESSONANTE PARA VSC1 (FORMADOR DE REDE) %%
clc
clear all
close all
s = tf('s');

%% tempos e frequencia

% do sistema
f_rede = 60;
t_rede = 1/f_rede;
f_controle = 10e3;
t_controle = 1/f_controle;
omega0 = 2*pi*f_rede;

% vetor de tempo
t_final = 10*t_rede;
t = 0:t_controle:t_final;

% sinal de refer?ncia
sin_w60 = sin(omega0*t);

%% defini??o do sistema

% parametros do Filtro LC + Carga
R1 = 0.1;
L1 = 1e-3;
C1 = 100e-6;
RD = 1.5;
R0 = 3.226666666666667;

num1 = RD*R0;
den1 = L1*(R0+RD);
num2 = RD;
den2 = L1*(R0+RD);
den3 = C1*(R0+RD);

a11 = -R1/L1 - num1/den1;
a12 = -1/L1  + num2/den2;
a21 = +R0/den3;
a22 = -1/den3;

b11 = +1/L1;
b21 = 0;

A = [a11 a12; a21 a22];
B = [b11; b21];
C = [1 0];
D = 0;

% extracao das funcoes de transferencia
[num, den] = ss2tf(A,B,C,D);
gpi = minreal(tf(num, den));

%% PROJETO: controlador de corrente

gci = 8;
gpwm = 1 / (1 + 1.5*(1/20000)*s);
gi_ol = gci * gpi * gpwm;
gi_cl = gi_ol / (1 + gi_ol);

%% PLOTAGEM: controlador de corrente

figure(1)
bode_corrente = bodeplot(gi_ol, gi_cl);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('malha aberta de corrente compensada', 'malha fechada');

figure(2)
lsim(gi_cl, sin_w60, t);
title('Resposta ao sinal senoidal de 60 Hz');
grid on;

%% PROJETO: Controlador de Tens?o

num = R0/(C1*(R0+RD));
den = s + 1/(C1*(R0+RD));
gpv = gi_cl * (num/den);

kp = 0.5; %CERTO: 0.4
zeta_z = 0.8; %CERTO: 2 / 2.5
zeta_p = 0.0001; %CERTO: 0.0001
w_res = 2*pi*60;
num = 2*zeta_z*w_res*s;
den = s^2 + 2 * zeta_p * w_res * s + w_res^2;
g_cv = kp + num/den

gv_ol = g_cv * gpv;
gv_cl = gv_ol / (1 + gv_ol);

figure(3)
bode_corrente = bodeplot(gv_ol);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('malha aberta de tens?o compensada');

figure(4)
bode_corrente = bodeplot(gv_cl);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('malha fechada de tens?o');
xlim([40 80]);

figure(5)
lsim(gv_cl, sin_w60, t);
title('Resposta ao sinal senoidal de 60 Hz');
grid on;

gv_cld = c2d(gv_cl, 1/10000.0, 'zoh');

figure()
pzmap(gv_cld);
title('Lugar das ra?zes no dom?nio Z');
grid on;

%% DISCRETIZACAO: Controlador de Tensão

g_cvd = c2d(g_cv, 1/10000.0, 'tustin');
[num, den] = tfdata(g_cvd);
disp('Numerator coefficients: ');
disp(num{1});
disp('Denominator coefficients: ');
disp(den{1});

%% PROJETO: impedancia virtual

lv = 1.25e-3;
wp = 2*pi*2500;
zeta = 1;
zo = s*lv;
zl = (s*lv*wp^2) / (s^2 + 2*zeta*wp*s + wp^2);

figure(6)
bode_corrente = bodeplot(zo, zl);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('ideal', 'realizavel');

%% DISCRETIZACAO: impedancia virtual

zld = c2d(zl, 1/10000.0, 'tustin');
[num, den] = tfdata(zld);
disp('Numerator coefficients: ');
disp(num{1});
disp('Denominator coefficients: ');
disp(den{1});

%% PROJETO: low pass filter

fc = 2*pi*500;

[b,a] = butter(2, fc, 's');
lpf = tf(b,a);

figure(7)
bode_corrente = bodeplot(zl, lpf, lpf*zl);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('z_{virtual}', 'lpf_{300Hz}', 'lpf_{300Hz} * z_{virtual}');
xlim([55 65]);

%% DISCRETIZACAO: low pass filter

lpfd = c2d(lpf, 1/10000.0, 'tustin');
[num, den] = tfdata(lpfd);
disp('Numerator coefficients: ');
disp(num{1});
disp('Denominator coefficients: ');
disp(den{1});

%% PROJETO: all pass filter (phase shifter)

wc = 2*pi*60;
phi = (90 - 80)* (pi/180);

tau = 1/1500;
cond = abs(sin(phi))/wc;

if(tau>cond)
    disp('realizavel');
else
    disp('nao realizavel');
end    

k = (wc * tau)/sin(phi)
w0 = wc * sqrt((k-1)/(k+1))
Q = cot(phi/2) * (w0*wc)/(wc^2-w0^2)

num = s^2 - (w0/Q)*s + w0^2;
den = s^2 + (w0/Q)*s + w0^2;
apf = (num/den);

%% PLOTAGEM: all pass filter + lpf + impedancia virtual

figure(8)
bode_corrente = bodeplot(apf);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('apf');
xlim([59.5 60.5]);

figure(9)
bode_corrente = bodeplot(zl, lpf, lpf*zl*apf);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('z_{virtual}', 'lpf_{300Hz}', 'lpf_{300Hz} * z_{virtual}');

%% DISCRETIZACAO: all pass filter

apfd = c2d(apf, 1/10000.0, 'tustin');
[num, den] = tfdata(apfd);
disp('Numerator coefficients: ');
disp(num{1});
disp('Denominator coefficients: ');
disp(den{1});