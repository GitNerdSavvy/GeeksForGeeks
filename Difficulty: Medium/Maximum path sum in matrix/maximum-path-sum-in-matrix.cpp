// User function Template for C++

class Solution {
  public:
    int maximumPath(vector<vector<int>>& matrix) {
        // code here
        int n=matrix.size();
       int m=matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int ans = -1e8;
        for (int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int l = j > 0 ? dp[i - 1][j - 1] : -1e8;
                int u = dp[i - 1][j];
                int r = j < m - 1 ? dp[i - 1][j + 1] : -1e8;
                dp[i][j] = matrix[i][j] + max({l, u, r});
            }
        }
        for (int j = 0; j < m; j++) {
            ans = max(ans, dp[n - 1][j]);
        }
        return ans;
    }
};