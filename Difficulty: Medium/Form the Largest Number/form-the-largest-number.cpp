class Solution {
  public:
    static bool cmp(string &a, string &b){
        return a+b > b+a;
    }
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>s;
        for(int it: arr) s.push_back(to_string(it));
        sort(s.begin(),s.end(),cmp);
        string ans="";
        for(string &i:s) ans+=i;
        
        if(ans[0]=='0') return "0";
        return ans;
    }
};