
clear

%%

m = 2.040; % [kg]
I = 0.03; % [kg.m^2]
c_t = [1.4*10^-6; 1.4*10^-6; 1.4*10^-6; 1.4*10^-6]; % kg.m.rad-2  %%% warning, was previously a constant %%%
theta1 = -pi/4;
theta2 = -theta1;
theta3 = pi;
theta4 = theta3;

% position des hélices
r1 = [-0.125;0.060;0];
r2 = [-0.125;-0.060;0];
r3 = [0.080;0.070;0];
r4 = [0.080;-0.070;0];

Kpx=3;
Kpy=5;
Kptheta=5;
Kp=diag([Kpx, Kpy, Kptheta]);
Kd = Kp*0.1;

f_min = 0.0615 * ones(4,1); % 2 001 rpm
%f_min = 1.8577 * ones(4,1); % 11 000 rpm
f_max = 5 * ones(4,1);% 18 500 rpm
%f_max = 6.1411 * ones(4,1); 20 000 rpm

f1 = [cos(theta1); sin(theta1); 0];
f2 = [cos(theta2); sin(theta2); 0];
f3 = [cos(theta3); sin(theta3); 0];
f4 = [cos(theta4); sin(theta4); 0];

W = [
    f1(1) f2(1) f3(1) f4(1); 
    f1(2) f2(2) f3(2) f4(2); 
    cross(r1, f1)' * [0; 0; 1], cross(r2, f2)' * [0; 0; 1], cross(r3, f3)' * [0; 0; 1], cross(r4, f4)' * [0; 0; 1]
    ];

f0 = null(W); % calculer annalitiquement le null space
f0 = f0/min(f0);

M = diag([m, m, I]);