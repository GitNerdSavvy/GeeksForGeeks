class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum=0;
        int mn=INT_MAX,currMn=0;
        int mx=INT_MIN,currMx=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            currMx=max(arr[i],currMx + arr[i]);
            mx=max(mx,currMx);
            
            currMn = min(arr[i],currMn + arr[i]);
            mn=min(mn,currMn);
        }
       return mx < 0 ? mx:max(mx, sum - mn);
    }
};