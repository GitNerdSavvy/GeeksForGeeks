class Solution {
  public:
  int ans = 0;

    bool canGo(int n, int m, int i, int j, vector<vector<int>> &grid) {
    return i >= 0 && j >= 0 && i < n && j < m && grid[i][j] == 0;
     }

   int solve(vector<vector<int>> &grid, int n, int m, int i, int j, vector<vector<int>> &dp) {
    if (!canGo(n, m, i, j, grid)) return 0;
    if (i == n - 1 && j == m - 1) return 1;
    if (dp[i][j] != -1) return dp[i][j];

    grid[i][j] = 2;
    int totalPaths = 0;
    if (canGo(n, m, i, j + 1, grid)) totalPaths += solve(grid, n, m, i, j + 1, dp);
    if (canGo(n, m, i + 1, j, grid)) totalPaths += solve(grid, n, m, i + 1, j, dp);
    grid[i][j] = 0;

    return dp[i][j] = totalPaths;
   }

   int uniquePaths(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    if (n == 1 && m == 1 && grid[0][0] == 1) return 0;

    vector<vector<int>> dp(n, vector<int>(m, -1));
    return solve(grid, n, m, 0, 0, dp);
   }

};