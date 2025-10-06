% Constantes
AB = [120, 180, 240]; %(en mm)
BC_ratios = [1/6, 1/4, 1/3];

% Préparation du tableau de graphiques
figure;
subplot_rows = length(AB);
subplot_cols = length(BC_ratios);

% Calculs
for i = 1:subplot_rows
    for j = 1:subplot_cols

        % Variables
        BC = AB * BC_ratios(j);
        OA = linspace(0, AB(i), 10000000);
        theta_OAB = acos(OA / AB(i));
        OB = AB(i) * sin(theta_OAB); 

        % Filtrer les cas valides (OB <= BC)
        valid = OB <= BC(j);

        % Calcul pour les cas valides uniquement
        OC = sqrt(BC(j)^2 - OB(valid).^2);
        theta = acos(OC/BC(j));
        theta_deg = rad2deg(theta);

        % Création du sous-graphique pour chaque combinaison
        subplot(subplot_rows, subplot_cols, (i-1)*subplot_cols + j);
        plot(OA(valid) + OC, theta_deg, 'b', 'LineWidth', 2);
        xlabel('OA + OC (mm)');
        ylabel('\theta (degrés)');
        title(['AB = ' num2str(AB(i)) ' mm, BC/AB = ' num2str(BC_ratios(j))]);
        grid on;
    end
end

% % Points
% A = [0;
%     0];
% B = A+[AB*cos(theta_0);
%     AB*sin(theta_0)];