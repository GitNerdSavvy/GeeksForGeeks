class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>ump;
        for(int i:arr){
            ump[i]++;
        }
        vector<int>ans(n,-1);
        stack<int>st;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && ump[st.top()]<=ump[arr[i]]) st.pop();
            if(!st.empty()) ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
