//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>s1;
        set<int>s2;
        vector<int>res;
       for(int i=0;i<n;i++){
           s1.push_back(i+1);
       }
       for(int i=0;i<n;i++){
           if(s2.find(arr[i])!=s2.end()){
               res.push_back(arr[i]);
              
           }
           else{
               s2.insert(arr[i]);
           }
       }
       for(int i=0;i<s1.size();i++){
           if(s2.find(s1[i])==s2.end()){
               res.push_back(s1[i]);
           }
       }
       
       return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends