class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l=0;
        int h=arr.size()-1;
        int ans=0;
        while(l<=h){
            ans=max(ans,(h-l)*min(arr[l],arr[h]));
            if(arr[l]<arr[h]){
                
                l++;
            }else{
                h--;
            }
        }
        return ans;
    }
};