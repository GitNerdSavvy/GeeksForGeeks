//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr, vector<int> &arr1) {
        // Your code here
        vector<int>ans;
        int temp=-1;
      int n=arr.size();
      int m=arr1.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(arr[i]<arr1[j]){
                i++;
            }
            else if(arr[i]>arr1[j]){
                j++;
            }else{
                 if(temp!=arr[i])
                {
                    ans.push_back(arr[i]);
                    temp=arr[i];
                }
                i++;
                j++;
            }
        }
        // while(i<n){
        //   ans.push_back(arr[i]);
        //   i++;
        // }
        // while(j<m){
        //   ans.push_back(arr1[j]);
        //   j++;
        // }
        return ans;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.intersection(arr1, arr2);

        if (v.size() > 0) {
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
        } else {
            cout << "[]";
        }

        cout << endl;
        cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends