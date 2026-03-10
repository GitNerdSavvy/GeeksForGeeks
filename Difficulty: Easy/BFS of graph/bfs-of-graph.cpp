class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v=adj.size();
        vector<int>ans;
        queue<int>q;
        vector<bool>vis(v,0);
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int v=q.front();
            q.pop();
            ans.push_back(v);
            for(int j=0;j<adj[v].size();j++){
                if(!vis[adj[v][j]]){
                    vis[adj[v][j]]=1;
                    q.push(adj[v][j]);
                }
            }
        }
        return ans;
    }
};