class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
          int n = arr.size() , ans = 0 ;
         for(int i = 0 ; i < n ; i ++) ans += arr[i] * (i + 1) * (n - i) ;
         return ans ;
    }
};