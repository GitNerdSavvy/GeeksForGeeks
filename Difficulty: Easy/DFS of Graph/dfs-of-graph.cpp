class Solution {
  public:
  
  void dfs(int v,vector<vector<int>>& adj,vector<int>&ans,vector<bool>&vis){
      vis[v]=1;
      ans.push_back(v);
      for(int j=0;j<adj[v].size();j++){
          if(!vis[adj[v][j]]){
              dfs(adj[v][j],adj,ans,vis);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool>vis(adj.size(),0);
        vector<int>ans;
        dfs(0,adj,ans,vis);
        return ans;
    }
};