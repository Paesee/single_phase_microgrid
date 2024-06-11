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

% sinal de referência
sin_w60 = sin(omega0*t);

%% SISTEMA: Nominal

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

%% SISTEMA: Curto

% parametros do Filtro LC + Carga
R0 = 0.1;

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
gpi_cc = minreal(tf(num, den));

%% SISTEMA: Circuito-aberto

% parametros do Filtro LC + Carga
R0 = 10e4;

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
gpi_ca = minreal(tf(num, den));

%% PROJETO: controlador de corrente

gci = 8.5;
gpwm = 1 / (1 + 1.5*(1/20000)*s);
% nominal
gi_ol = gci * gpi * gpwm;
gi_cl = gi_ol / (1 + gi_ol);
% curto-circuito
gi_ol_cc = gci * gpi_cc * gpwm;
gi_cl_cc = gi_ol_cc / (1 + gi_ol_cc);
% circuito-aberto
gi_ol_ca = gci * gpi_ca * gpwm;
gi_cl_ca = gi_ol_ca / (1 + gi_ol_ca);

%% PLOTAGEM: controlador de corrente

figure(1)
bode_corrente = bodeplot(gi_ol, gi_ol_cc, gi_ol_ca);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
sub = legend('$R\_0\_{NOM}$', '$R\_0\_{CC}$', '$R\_0\_{CA}$');
set(sub, 'Interpreter', 'latex');
set(sub, 'Location', 'southwest');
xlim([1 1e4]);
xlabel('Frequência');
ylabel('Fase');

figure(2)
bode_corrente = bodeplot(gi_cl, gi_cl_cc, gi_cl_ca);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
sub = legend('$R\_0\_{NOM}$', '$R\_0\_{CC}$', '$R\_0\_{CA}$');
set(sub, 'Interpreter', 'latex');
set(sub, 'Location', 'southwest');
xlim([1 1e4]);
xlabel('Frequência');
ylabel('Fase');

%% PLANTA: planta equivalente de tensão

% nominal
R0 = 3.226666666666667;
num = R0/(C1*(R0+RD));
den = s + 1/(C1*(R0+RD));
gpv = 1 * (num/den);

% curto-circuito
R0 = 0.1;
num = R0/(C1*(R0+RD));
den = s + 1/(C1*(R0+RD));
gpv_cc = 1 * (num/den);

% circuito-aberto
R0 = 10e4;
num = R0/(C1*(R0+RD));
den = s + 1/(C1*(R0+RD));
gpv_ca = 1 * (num/den);

%% PROJETO: controlador de tensão

kp = 0.3;
ki = 2*omega0*2;
wc = 2*pi*60*0.001;
w0 = 2*pi*60;
g_pr = kp + (ki*s)/(s^2 + 2*wc*s + w0^2);

kp = 0.2; %CERTO: 0.4
zeta_z = 0.9; %CERTO: 2 / 2.5
zeta_p = 0.001; %CERTO: 0.0001
w_res = 2*pi*60;
num = 2*zeta_z*w_res*s;
den = s^2 + 2 * zeta_p * w_res * s + w_res^2;
g_pr = kp + num/den

% nominal
gv_ol = g_pr * gpv;
gv_cl = gv_ol / (1 + gv_ol);
% curto-circuito
gv_ol_cc = g_pr * gpv_cc;
gv_cl_cc = gv_ol_cc / (1 + gv_ol_cc);
% circuito-aberto
gv_ol_ca = g_pr * gpv_ca;
gv_cl_ca = gv_ol_ca / (1 + gv_ol_ca);

figure(3)
bode_corrente = bodeplot(gv_ol, gv_ol_cc, gv_ol_ca);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
sub = legend('$R\_0\_{NOM}$', '$R\_0\_{CC}$', '$R\_0\_{CA}$');
set(sub, 'Interpreter', 'latex');
set(sub, 'Location', 'southwest');
xlim([1 1e4]);
xlabel('Frequência');
ylabel('Fase');

%% TESTE

figure()
lsim(gv_cl, sin_w60, t);
title('Resposta ao sinal senoidal de 60 Hz');
grid on;

%% DISCRETIZACAO: Controlador de Tensão

g_prd = c2d(g_pr, 1/10000.0, 'tustin');
[num, den] = tfdata(g_prd);
disp('Numerator coefficients: ');
disp(num{1});
disp('Denominator coefficients: ');
disp(den{1});

%% PROJETO: impedancia virtual

lv = 1.5e-3;
wp = 2*pi*2500;
zeta = 1;
zo = s*lv;
zl = (s*lv*wp^2) / (s^2 + 2*zeta*wp*s + wp^2);

wc = 2*pi*500;
lpf = wc/(s+wc);

zl_lpf = zl*lpf;

figure(4)
bode_corrente = bodeplot(zo, zl,zl_lpf);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
sub = legend('$Z\_{vi}$', '$Z\_{vr}$', '$Z\_{vi} \cdot LPF\_{500Hz}$');
set(sub, 'Interpreter', 'latex');
set(sub, 'Location', 'southwest');
xlim([1 1e4]);
xlabel('Frequência');
ylabel('Fase');