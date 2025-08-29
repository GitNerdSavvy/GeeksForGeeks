class Solution {
  public:
    string smallestWindow(string &s, string &p) {
        // code here
            if (s.size() < p.size()) return "";

        unordered_map<char, int> need, have;
        for (char c : p) need[c]++;
    
        int required = need.size(), formed = 0;
        int l = 0, r = 0;
        int minLen = INT_MAX, start = 0;
    
        while (r < s.size()) {
            char c = s[r];
            have[c]++;
            if (need.count(c) && have[c] == need[c]) formed++;
    
            while (l <= r && formed == required) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }
                have[s[l]]--;
                if (need.count(s[l]) && have[s[l]] < need[s[l]]) formed--;
                l++;
            }
            r++;
        }
    
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};