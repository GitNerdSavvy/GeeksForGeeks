class Solution {
  public:
  
    bool check(vector<int>& arr,int mid,int k){
        int needed=0;
        int left=0;
        for(int i:arr){
            if(left>=i){
                left-=i;
            }else{
                needed++;
                left=mid-i;
            }
            if(needed>k) return 0;
        }
        if(needed>k) return 0;
        else return 1;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int l=0,h=0;
        for(int i:arr){
            l=max(l,i);
            h+=i;
        }
        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(check(arr,mid,k)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};