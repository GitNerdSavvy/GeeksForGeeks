//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int l=0,j=0,count=0,ans=INT_MAX;
        set<char>ump;
        for(char c : str){
            ump.insert(c);
        }
        unordered_map<char,int>res;
        while(j<str.length()){
            res[str[j]]++;
            while(l<=j && res.size()==ump.size()){
                res[str[l]]--;
                if(res[str[l]]==0)res.erase(str[l]);
                count=j-l+1;
                ans=min(ans,count);
                l++;
            }
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends