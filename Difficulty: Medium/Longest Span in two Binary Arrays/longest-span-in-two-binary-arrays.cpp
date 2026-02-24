class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n=a1.size();
        unordered_map<int,int>ump;
        int pf=0,ans=0;
        for(int i=0;i<n;i++){
            pf+=a1[i]-a2[i];
            if(pf==0) ans=i+1;
            if(ump.find(pf)!=ump.end()){
                ans=max(ans,i-ump[pf]);
            }else{
                ump[pf]=i;
            }
        }
        return ans;
    }
};