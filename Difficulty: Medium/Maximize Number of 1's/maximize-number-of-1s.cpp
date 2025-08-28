class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int ans=0;
        int zerocnt=0,l=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) zerocnt++;
            while(zerocnt>k){
            if(arr[l]==0) zerocnt--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
