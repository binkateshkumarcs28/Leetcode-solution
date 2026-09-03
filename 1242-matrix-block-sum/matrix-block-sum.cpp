class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> ans(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                for(int r = max(0, i-k); r <= min(m-1, i+k); r++) {
                    for(int c = max(0, j-k); c <= min(n-1, j+k); c++) {
                        ans[i][j] += mat[r][c];
                    }
                }
            }
        }

        return ans;
    }
};