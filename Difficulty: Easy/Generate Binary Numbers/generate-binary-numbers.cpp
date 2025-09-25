class Solution {
  public:
      string func(int n) {
        if (n == 0) return "";
        return func(n / 2) + char((n % 2) + '0');
    }
        vector<string> generateBinary(int n) {
        // code here
        vector<string>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(func(i));
        }
        return ans;
    }
};