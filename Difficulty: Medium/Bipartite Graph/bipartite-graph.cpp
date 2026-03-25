class Solution {
  public:
    bool dfs(int node,int col,vector<int>adj[],vector<int>&color){
       color[node]=col;
        for(auto it:adj[node]){
            if (color[it] == -1) {
                if (!dfs(it, !col, adj, color)) return false;
            } else if (color[it] == col) {
                return false;
            }
        }
        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int>adj[V];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>color(V,-1);
        for(int i=0;i<V;i++){
            if (color[i] == -1) {
                if (!dfs(i, 0, adj, color)) return false;
            }
        }
        return true;
    }
};