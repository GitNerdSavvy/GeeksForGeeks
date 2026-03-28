// User function Template for C++
class Solution {
  public:
  void dfs(int node,vector<pair<int,int>>adj[],vector<bool>&vis,stack<int>&st){
      vis[node]=true;
      for(auto it:adj[node]){
          if(!vis[it.first]){
              dfs(it.first,adj,vis,st);
          }
      }
      st.push(node);
  }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[V];
        for(int i=0;i<E;i++){
           int u=edges[i][0];
           int v=edges[i][1];
           int w=edges[i][2];
           adj[u].push_back(make_pair(v,w));
        }
        
        vector<bool>vis(V,false);
        vector<int>dis(V,1e7);
        stack<int>st;
        dfs(0,adj,vis,st);
        dis[0]=0;
        while(st.size()){
            int node=st.top();
            st.pop();
            for(auto it:adj[node]){
                int v=it.first;
                int w=it.second;
               if (dis[node] + w < dis[v]) {
                    dis[v] = dis[node] + w;
                }
            }
        }
        for(int i=0;i<V;i++){
            if(dis[i]==1e7){
                dis[i]=-1;
            }
        }
        return dis;
    }
};
