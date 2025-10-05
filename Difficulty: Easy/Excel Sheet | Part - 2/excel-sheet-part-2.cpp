// User function template for C++

class Solution {
  public:
    int ExcelColumnNumber(string s) {
        // Your code goes here
        int ans=0;
        int t=0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=(s[i]-'A'+1)*pow(26,t);
            t++;
            
        }
        return ans;
    }
};