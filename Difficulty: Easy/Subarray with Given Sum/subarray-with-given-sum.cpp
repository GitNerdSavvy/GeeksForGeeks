//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>& arr, int sum) {
        
        vector<int>res;
        int currSum=0;
        int l=0;
               if(sum==0){
               return{};
           }
       for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];

        while (currSum > sum && l <= i) {
            currSum -= arr[l];
            l++;
        }

        if (currSum == sum) {
            res.push_back(l + 1); 
            res.push_back(i + 1); 
            return res;
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

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int sum;
        cin >> sum;
        cin.ignore();

        Solution sln;
        vector<int> list = sln.subarraySum(arr, sum);
        if (list.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : list)
                cout << i << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends