class Solution {
  public:
  
  void dfs(int idx,vector<int>adj[],vector<bool>&vis,stack<int>&s){
      vis[idx]=true;
      for(auto it:adj[idx]){
          if(!vis[it]){
              dfs(it,adj,vis,s);
          }
      }
          s.push(idx);
  }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>adj[V];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
           
        }
        vector<bool>vis(V,0);
        stack<int>s;
        for(int i=0;i<V;i++){
            if(!vis[i])
                dfs(0,adj,vis,s);
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};