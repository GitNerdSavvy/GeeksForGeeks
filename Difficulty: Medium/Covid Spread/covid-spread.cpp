// User function Template for C++

class Solution {
  public:
  int row,col;
  vector<vector<int>>dir{{-1,0},{1,0},{0,-1},{0,1}};
  bool isValid(int r,int c){
      if(r<0||r>=row || c<0 || c>=col) return false;
      
      return true;
  }
    int helpaterp(vector<vector<int>> hospital) {
        // code here
        row=hospital.size();
        col=hospital[0].size();
        
        queue<pair<int,int>>q;
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        if(hospital[i][j]==2)q.push(make_pair(i,j));
        
        int count=0;
        while(!q.empty()){
            bool infectedInThisRound = false;
            int curr=q.size();
            while(curr--){
            auto [r,c]=q.front();
            q.pop();
            
            for(int k=0;k<4;k++){
                int x=r+dir[k][0];
                int y=c+dir[k][1];
                if(isValid(x,y)&&hospital[x][y]==1){
                    hospital[x][y]=2;
                    q.push(make_pair(x,y));
                    infectedInThisRound = true;
                }
            }
                
            }
            if (infectedInThisRound) count++;
        }
         for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        if(hospital[i][j]==1)return -1;
        
        return count;
        
        
        
    }
};
