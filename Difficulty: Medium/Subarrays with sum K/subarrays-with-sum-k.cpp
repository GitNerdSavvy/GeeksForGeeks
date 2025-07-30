class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
         unordered_map<long long, int> ump;
        int count = 0;
        long long curr = 0;
    
        ump[0] = 1;
    
        for (int num : arr) {
            curr += num;
            long long sum = curr - k;
    
            if (ump.count(sum)) {
                count += ump[sum];
            }
    
            ump[curr]++;
        }
    
        return count;
    }
};