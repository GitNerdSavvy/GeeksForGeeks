//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        int start=0;
        int curr=0;
        for(int i=0;i<arr.size();i++){
            curr+=arr[i];
            while(target<curr){
                curr-=arr[start];
                start++;
            }
            if(curr==target){
                ans.push_back(start+1);
                ans.push_back(i+1);
                break;
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends