//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int sum=0;
         int l=0;
        int r=k;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
          if (l==r) return sum;
        int maxSum=sum;
        
       
        while(r<n){
           sum=sum-arr[l];
           l++;
           sum=sum+arr[r];
           r++;
          maxSum= max(sum,maxSum);
            
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends