class Solution {
  public:
  string bin(int n,int i){
        // if (n == 0) return "0";
        string ans = "";
        while (n > 0) {
            ans += '0' + (n % 2);
            n /= 2;
        }
        while(ans.length()<i) ans+='0';
        reverse(ans.begin(), ans.end());
        return ans;
      
  }
    vector<string> binstr(int n) {
        // code here
        vector<string>ans;
        int cnt=pow(2,n);
        for(int i=0;i<cnt;i++){
            ans.push_back(bin(i,n));
        }
        return ans;
    }
};