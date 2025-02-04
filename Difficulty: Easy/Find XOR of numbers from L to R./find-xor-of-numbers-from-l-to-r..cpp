//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int findN(int n){
      int m=n%4;
      if(m==0){
          return n;
      }
      if(m==1){
          return 1;
      }
      if(m==2){
          return n+1;
      }
      if(m==3){
          return 0;
      }
  }
  
    int findXOR(int l, int r) {
        // complete the function here
        return (findN(l-1)^findN(r));
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends