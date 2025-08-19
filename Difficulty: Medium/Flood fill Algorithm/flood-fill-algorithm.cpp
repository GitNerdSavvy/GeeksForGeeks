class Solution {
  public:
  vector<vector<int>>dir= {{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int n=image.size();
        int m=image[0].size();
         int oldColor = image[sr][sc];
         if (oldColor == newColor) return image;
         
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc] = newColor;
        while(!q.empty()){
            auto [row,col] = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int r=row+dir[i][0];
                int c=col+dir[i][1];
                if(r<0 || r>=n || c<0 || c>=m) continue;
                if(image[r][c]!=oldColor) continue;
                image[r][c]=newColor;
                q.push({r,c});
            }
        }
        return image;
    }
};