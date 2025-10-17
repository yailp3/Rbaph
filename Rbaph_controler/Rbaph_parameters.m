clear

%%

m = 2.040; % Mase du robot en [kg]
I = 0.03; % Moment d'inertie [kg.m^2]
M = diag([m, m, I]);
c_t = [1.4*10^-6; 1.4*10^-6; 1.4*10^-6; 1.4*10^-6]; % trust coefficient des hélices en [kg.m.rad-2]  %%% warning, was previously a constant %%%


G = [0;0]; % si le centre de masse est mal placé, modifier cette variable.

% position des hélices
theta1 = -pi/4;
theta2 = -theta1;
theta3 = pi;
theta4 = theta3;
r1 = [G(1)-0.125;G(2)+0.060;0];
r2 = [G(1)-0.125;G(2)-0.060;0];
r3 = [G(1)+0.080;G(2)+0.070;0];
r4 = [G(1)+0.080;G(2)-0.070;0];

% Gains
Kpx=0;
Kpy=3;
Kptheta=0;
Kp=diag([Kpx, Kpy, Kptheta]);
Kd = Kp*0.1;

% Plage de force des moteurs
f_min = 0.0615 * ones(4,1); % 2 001 rpm, minimum de betalink
f_max = 5 * ones(4,1);% 18 500 rpm, maximum du plus faible des moteurs

% Matrice d'allocation
f1 = [cos(theta1); sin(theta1); 0];
f2 = [cos(theta2); sin(theta2); 0];
f3 = [cos(theta3); sin(theta3); 0];
f4 = [cos(theta4); sin(theta4); 0];

W = [
    f1(1) f2(1) f3(1) f4(1); 
    f1(2) f2(2) f3(2) f4(2); 
    cross(r1, f1)' * [0; 0; 1], cross(r2, f2)' * [0; 0; 1], cross(r3, f3)' * [0; 0; 1], cross(r4, f4)' * [0; 0; 1]
    ];

% null space
f0 = null(W); 
f0 = f0/min(f0);