class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans(n, -1);
        vector<int> suff(n);
        
        suff[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--) {
            suff[i] = min(arr[i], suff[i+1]);
        }
    
        for(int i = 0; i < n-1; i++) {
            int l = i+1, h = n-1, t = -1;
            while(l <= h) {
                int mid = l + (h-l)/2;
                if(suff[mid] < arr[i]) {
                    t = mid;
                    l = mid+1;
                } else {
                    h = mid-1;
                }
            }
            ans[i] = t;
        }
        return ans;
    }
};