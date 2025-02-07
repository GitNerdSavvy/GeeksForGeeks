//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n1=a.size();
        int n2=b.size();
        if(n1>n2) return medianOf2(b,a);
        int n=n1+n2;
        int begin=0,end=n1;
        while(begin<=end){
            int i1=(begin+end)/2;
            int i2=(n+1)/2 -i1;
            double min1=(i1==n1)?INT_MAX:a[i1];
            double max1=(i1==0)?INT_MIN:a[i1-1];
            double min2=(i2==n2)?INT_MAX:b[i2];
            double max2=(i2==0)?INT_MIN:b[i2-1];
            if(max1<=min2 && max2<=min1 ){
                if(n%2 == 1) return max(max1, max2);
                else return ((double)(max(max1, max2) + min(min1, min2))) / 2;
            }
                else if(max1>min2) end=i1-1;
                
                else begin=i1+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends