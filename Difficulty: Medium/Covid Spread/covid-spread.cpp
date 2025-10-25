// User function Template for C++

class Solution {
  public:
  #define vii vector<vector<int>>
  #define f(i,s,e) for(int i=0;i<e;i++)
  
    int helpaterp(vector<vector<int>> hos) {
        // code here
        int n=hos.size();
        int m=hos[0].size();
        
        // vii vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int cnt=0;
        f(i,0,n){
            f(j,0,m){
                if(hos[i][j]==1){
                    cnt++;
                }else if(hos[i][j]==2){
                    q.push({i,j});
                    // vis[i][j]=2;
                }
                
            }
        }
         if(cnt == 0) return 0; 
        int ans=0;
        q.push({-1,-1});
        vii dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
             if (x== -1 && y == -1) {
                    ans++;
                    if (!q.empty()) {
                        q.push({-1, -1});
                    } else {
                        break;
                    }
                } 
           else {
               f(d,0,4){
                int r=x+dir[d][0];
                int c=y+dir[d][1];
                
                if(r<0 || c<0 || r>=n || c>=m) continue;
                if(hos[r][c] != 1) continue;
                
                cnt--;
                hos[r][c]=2;
                q.push({r,c});
                
            }
               
           }
        }
        return cnt==0?ans-1:-1;
    }
};
