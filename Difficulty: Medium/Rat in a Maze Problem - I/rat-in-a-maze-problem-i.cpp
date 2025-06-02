class Solution {
  public:
    vector<string> directions = {"D", "L", "R", "U"};
        int dx[4] = {1, 0, 0, -1};
        int dy[4] = {0, -1, 1, 0};

   bool canGo(int x, int y, int n, vector<vector<int>>& grid) {
       return x >= 0 && y >= 0 && x < n && y < n && grid[x][y] == 1;
     }
    void solve(int x, int y, vector<vector<int>>& grid, int n, vector<string>& res, string path){
          if (x == n - 1 && y == n - 1) {
        res.push_back(path);
        return;
          }
       grid[x][y]=2;
      for (int k = 0; k < 4; ++k) {
        int newX = x + dx[k];
        int newY = y + dy[k];
        if (canGo(newX, newY, n, grid)) {
            solve(newX, newY, grid, n, res, path + directions[k]);
        }
    }
       grid[x][y]=1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> res;
        int n = maze.size();
       if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) return res;
       solve(0, 0, maze, n, res, "");
       sort(res.begin(), res.end());
        return res;
    }
};