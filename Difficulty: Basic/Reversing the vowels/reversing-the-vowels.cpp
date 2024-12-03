//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            //code here.
             int i = 0;
    int j = s.length() - 1;
    auto is_vowel = [](char c) {
        c = tolower(c); 
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    };
    while (i < j) {
        if (!is_vowel(s[j])) {
            j--;
        } else if (!is_vowel(s[i])) {
            i++;
        } else {
            std::swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends