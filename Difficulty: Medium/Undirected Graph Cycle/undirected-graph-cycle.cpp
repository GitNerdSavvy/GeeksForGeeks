class Solution {
  public:
  bool detect(int node,vector<int>adj[],vector<bool>&vis){
      queue<pair<int,int>>q;
      q.push({node,-1});
      vis[node]=1;
      while(!q.empty()){
          auto [node,parent] =q.front();
          q.pop();
           for (int neighbor : adj[node]) {

            // If neighbor is not vis, mark it vis and push to queue
            if (!vis[neighbor]) {
                vis[neighbor] = true;
                q.push({neighbor, node});
            } 
            // If neighbor is vis and not parent, a cycle is detected
            else if (neighbor != parent) {
                return true;
            }
          
      }
      }
      return 0;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] and detect(i,adj,vis)) return 1;
        }
        return 0;
    }
};