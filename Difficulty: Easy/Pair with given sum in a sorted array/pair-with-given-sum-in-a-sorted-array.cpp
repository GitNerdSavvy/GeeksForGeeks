//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPair(int k, vector<int> &arr) {
        // Complete the function
        int n=arr.size();
        int i=0,j=n-1,res=0;
        
        while(i<j){
            if(arr[i]+arr[j]==k){
                res++;
                j--;
            }
            else if (arr[i]+arr[j]>k){
                j--;
            }
            else{
                i++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int k;
        cin >> k;
        string input;
        getline(cin, input);
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.countPair(k, arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends