class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                int x = mat[i][j];

                if(i > 0 && mat[i-1][j] > x) continue;
                if(i < m-1 && mat[i+1][j] > x) continue;
                if(j > 0 && mat[i][j-1] > x) continue;
                if(j < n-1 && mat[i][j+1] > x) continue;

                return {i, j};
            }
        }

        return {-1, -1};
    }
};