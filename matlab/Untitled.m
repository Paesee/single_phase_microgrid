%% PROJETO CONTROLADOR RESSONANTE PARA VSC1 (FORMADOR DE REDE) %%
clc
clear all
close all
s = tf('s');

%% tempos e frequencia

% do sistema
f_rede = 60;
t_rede = 1/f_rede;
f = 20e3;
ts = 1/f;
omega0 = 2*pi*f_rede;

% vetor de tempo
t_final = 10*t_rede;
t = 0:ts:t_final;

% sinal de refer�ncia
sin_w60 = sin(omega0*t);

%% defini��o do sistema

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
a13 = +1/L1;
a21 = +R0/den3;
a22 = -1/den3;
a23 = 0;
a31 = 0;
a32 = 0;
a33 = -1/ts;

b11 = 0;
b21 = 0;
b31 = 1/ts;

A = [a11 a12 a13; a21 a22 a23; a31 a32 a33];
B = [b11; b21; b31];
C = [1 0 0];
D = 0;

Ad = eye(3,3) + A*ts;
Bd = B*ts;

% extracao das funcoes de transferencia
sys = ss(A,B,C,D);
sysd = ss(Ad, Bd, C, D, ts);

%% PROJETO: controlador de corrente

% encontra par de polos conjugados baseados em overshoot m�ximo
% settling_time = 1.5e-3;
% OS = 0.1;
% 
% csi = sqrt(log(OS)^2/(pi^2 + log(OS)^2));
% csi = 0.8;
% wn = 4/(csi*settling_time);
% 
% theta = acos(csi);
% 
% pole_1 = -wn*cos(theta) + wn*sin(theta)*j;
% pole_2 = -wn*cos(theta) - wn*sin(theta)*j;
% 
% K = place(A, B, [pole_1 pole_2]);

Q = [100 0 0; 0 1 0; 0 0 1];
R = 1;
K = dlqr(Ad, Bd, Q, R);

% Pzmap do Sistema em Malha Fechada
Amf = Ad-Bd*K;
sys_mf = ss(Amf, Bd, C, D, ts);

figure(1)
pzmap(sysd, sys_mf);
legend('sys', 'sys_{mf}');

%% QUEST�O 06: Resposta do Sistema

% referencia
u = 1 * sin(omega0*t);
% acao de controle maxima
umax = 1.2 * ones(size(t));
% resposta ao sinal arbitrario
[y, t, x] = lsim(sys_mf, u, t);
% acao de controle
uc = -K * x';

% plotagem
figure(2)
% saida
subplot(2,1,1);
plot(t, u, t, y);
title('Sinal de Sa�da');
xlim([0 t(end)]);
xlabel('Tempo (s)');
ylabel('Corrente (A)');
legend('Refer�ncia', 'Sa�da', 'Location', 'Best');
grid on;
% sinal de controle
subplot(2,1,2);
plot(t, umax, t, -umax, t, uc);
title('Sinal de Controle');
xlim([0 t(end)]);
xlabel('Tempo (s)');
ylabel('Tens�o (V)');
legend('U_{max}', 'U_{min}', 'U_{C}', 'Location', 'Best');
grid on;

%% PLANTA: Corrente Ilf
[num, den] = ss2tf(Amf,Bd,C,D);
gpi = minreal(tf(num, den));

%% PROJETO: controlador de corrente

gci = 8;
gpwm = 1 / (1 + 1.5*(1/20000)*s);
gi_ol = gci * gpi * gpwm;
gi_cl = gi_ol/(1+gi_ol);

%% PLOTAGEM: controlador de corrente

figure(3)
bode_corrente = bodeplot(gi_ol);
title('Diagrama de Bode');
setoptions(bode_corrente, 'FreqScale', 'log', 'FreqUnits', 'Hz', 'Grid', 'on');
legend('malha aberta de corrente compensada', 'malha fechada');

figure(4)
lsim(gi_ol, sin_w60, t);
title('Resposta ao sinal senoidal de 60 Hz');
grid on;