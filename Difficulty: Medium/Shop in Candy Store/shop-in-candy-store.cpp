class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int n=prices.size();
        sort(prices.begin(),prices.end());
        int i=0,j=n-1;
        int mn=0,mx=0;
        while(i<=j){
            mn+=prices[i];
            j-=k;
            i++;
        }
        i=0,j=n-1;
        while(i<=j){
            mx+=prices[j];
            i+=k;
            j--;
        }
        return {mn,mx};
    }
};