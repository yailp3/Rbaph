fig = openfig('f_max_new.fig','invisible');
stairs_handles = findall(fig,'Type','stair');

nStairs = numel(stairs_handles);

% Collect all X and Y vectors
X = cell(nStairs,1);
Y = cell(nStairs,1);
len = zeros(nStairs,1);
for k = 1:nStairs
    X{k} = stairs_handles(k).XData(:);
    Y{k} = stairs_handles(k).YData(:);
    len(k) = numel(X{k});
end

% Create a matrix padded with NaN to the longest length
maxLen = max(len);
allData = nan(maxLen, 2*nStairs);   % [X1 Y1 X2 Y2 ...]
colNames = cell(1,2*nStairs);
for k = 1:nStairs
    allData(1:len(k), 2*k-1) = X{k};
    allData(1:len(k), 2*k)   = Y{k};
    colNames{2*k-1} = sprintf('X%d',k);
    colNames{2*k}   = sprintf('Y%d',k);
end

% Save as a single CSV with column headers
T = array2table(allData,'VariableNames',colNames);
writetable(T,'f_max_new_all_stairs.csv');

disp('✅ All stair data saved to f_max_all_stairs.csv');