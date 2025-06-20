class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int ans=0,sum=0;
        unordered_map<int,int>ump;
        ump[0] =-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                sum+=1;
            }else sum-=1;
            
            if(ump.find(sum) != ump.end()){
                ans= max(ans, i-ump[sum]);
            }else ump[sum] =i;
        }
        return ans;
    }
};