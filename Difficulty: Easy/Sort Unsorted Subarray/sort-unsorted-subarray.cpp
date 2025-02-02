//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> printUnsorted(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>v;
        for(int i:arr){
            v.push_back(i);
        }
       sort(v.begin(),v.end());
        int i=0;
        while(i<n){
            if(arr[i]!=v[i]){
                break;
            }
            i++;
        }
        int j=n-1;
        while(j>=0){
            if(arr[j]!=v[j]){
                break;
            }
            j--;
        }
        if(i==n-1) return {0,0};
         return {i,j};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the number of test cases
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr);
        cout << ans[0] << " " << ans[1] << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends