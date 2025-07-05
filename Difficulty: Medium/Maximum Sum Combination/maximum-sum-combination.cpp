class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
           vector<int> ans;
           int n=a.size();
       sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        priority_queue<pair<int,pair<int,int>>> p;
        p.push({a[0]+b[0],{0,0}});
        set<pair<int,int>> st;
        
        while(!p.empty()){
          
            int val=it.first;  auto it=p.top();
            
            int i=it.second.first;
            int j=it.second.second;
            ans.push_back(val);
            p.pop();
            if(ans.size()==k)return ans;
           
            if(i+1<n && j<n){
                  if(st.find({i+1,j})==st.end()){
                       p.push({a[i+1]+b[j],{i+1,j}});
                       st.insert({i+1,j});
                  }
                
            }
            if(i<n && j+1<n) {
             if(st.find({i,j+1})==st.end()){
                 p.push({a[i]+b[j+1],{i,j+1}});
                  st.insert({i,j+1});
             }
             
            }
            
        }
        return  ans;
    }
};