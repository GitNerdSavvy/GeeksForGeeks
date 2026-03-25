class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<int>adj[V];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>dis(V,-1);
        vector<bool>vis(V,false);
        queue<int>q;
        q.push(src);
         vis[src]=true;
        dis[src]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
           
            for(auto it:adj[node]){
                if(vis[it]) continue;
                
                vis[it]=true;
                dis[it]=dis[node]+1;
                q.push(it);
            }
        }
        return dis;
    }
};
