% Initialisation des angles et vecteurs
theta1 = -pi/4;
theta2 = -theta1;
theta3 = pi;
theta4 = theta3;

% position des hélices
r1 = [-0.125;0.060;0];
r2 = [-0.125;-0.060;0];
r3 = [0.080;0.070;0];
r4 = [0.080;-0.070;0];

f_min = 0;
f_max = 3.4544;

f1 = [cos(theta1); sin(theta1); 0];
f2 = [cos(theta2); sin(theta2); 0];
f3 = [cos(theta3); sin(theta3); 0];
f4 = [cos(theta4); sin(theta4); 0];

W = [
    f1(1) f2(1) f3(1) f4(1); 
    f1(2) f2(2) f3(2) f4(2); 
    cross(r1, f1)' * [0; 0; 1], cross(r2, f2)' * [0; 0; 1], ...
    cross(r3, f3)' * [0; 0; 1], cross(r4, f4)' * [0; 0; 1]
];


% Demander à l'utilisateur de saisir la valeur de n
n = input('Entrez la valeur de n (nombre de points par moteur) : ');

% Combinaisons de forces moteurs
motor_forces = combvec( ...
    linspace(f_min, f_max, n), ...
    linspace(f_min, f_max, n), ...
    linspace(f_min, f_max, n), ...
    linspace(f_min, f_max, n))';

F = (W * motor_forces')';

% Figure 1 : Zone d’effort réalisable
f1_fig = figure('Visible', 'off');
scatter(F(:,1), F(:,2), 1, 'filled');
xlabel('f_x [N]');
ylabel('f_y [N]');
title('Zone d’effort réalisable dans le plan (f_x, f_y)');
axis equal; grid on;
saveas(f1_fig, 'zone_effort_fx_fy.png');

% Enveloppe convexe
K = convhull(F(:,1), F(:,2));

% Figure 2 : Polygone convexe
f2_fig = figure('Visible', 'off');
fill(F(K,1), F(K,2), [0.2 0.6 1], 'FaceAlpha', 0.4);
xlabel('f_x [N]'); ylabel('f_y [N]');
title('Polygone convexe des efforts réalisables (f_x, f_y)');
axis equal; grid on;
saveas(f2_fig, 'convex_polygon_fx_fy.png');

% Alpha Shape
shp = alphaShape(F(:,1), F(:,2), 0.05);

% Figure 3 : Alpha Shape
f3_fig = figure('Visible', 'off');
plot(shp, 'FaceColor', [0.2 0.6 1], 'FaceAlpha', 0.4);
xlabel('f_x [N]');
ylabel('f_y [N]');
title('Alpha shape des efforts réalisables (f_x, f_y)');
axis equal; grid on;
saveas(f3_fig, 'alpha_shape_fx_fy.png');

% Seuil tolérance
tauz_tol = 1e-2;
F_zero_tauz = F(abs(F(:,3)) < tauz_tol, :);

% Enveloppe convexe à tau_z ≈ 0
K_zero = convhull(F_zero_tauz(:,1), F_zero_tauz(:,2));

% Figure 4 : Polygone à tau_z ≈ 0
f4_fig = figure('Visible', 'off');
fill(F_zero_tauz(K_zero,1), F_zero_tauz(K_zero,2), [0.8 0.3 0.3], 'FaceAlpha', 0.5);
xlabel('f_x [N]'); ylabel('f_y [N]');
title('Zone d’efforts réalisables à \tau_z ≈ 0 (translation pure)');
axis equal; grid on;
saveas(f4_fig, 'convex_tauz_zero.png');

% Alpha Shape à tau_z ≈ 0
shp_zero = alphaShape(F_zero_tauz(:,1), F_zero_tauz(:,2), 0.03);

% Figure 5 : Alpha shape à tau_z ≈ 0
f5_fig = figure('Visible', 'off');
plot(shp_zero, 'FaceColor', [0.8 0.3 0.3], 'FaceAlpha', 0.5);
xlabel('f_x [N]');
ylabel('f_y [N]');
title('Alpha shape des efforts réalisables à \tau_z ≈ 0 (translation pure)');
axis equal; grid on;
saveas(f5_fig, 'alpha_shape_tauz_zero.png');

% Figure 6 : Espace 3D
f6_fig = figure('Visible', 'off');
scatter3(F(:,1), F(:,2), F(:,3), 3, F(:,3), 'filled');
xlabel('f_x [N]'); ylabel('f_y [N]'); zlabel('\tau_z [Nm]');
title('Espace 3D des efforts réalisables (f_x, f_y, \tau_z)');
axis equal; grid on; view(45, 30);
colorbar; colormap turbo;
saveas(f6_fig, '3d_effort_space.png');