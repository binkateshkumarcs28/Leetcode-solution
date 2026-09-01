class NumMatrix {
public:
    vector<vector<int>> p;

    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        p = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                p[i][j] = matrix[i-1][j-1]
                        + p[i-1][j]
                        + p[i][j-1]
                        - p[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return p[row2+1][col2+1]
             - p[row1][col2+1]
             - p[row2+1][col1]
             + p[row1][col1];
    }
};