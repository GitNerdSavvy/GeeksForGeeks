class Solution {
  public:
  
   bool check(vector<int>& arr, double mid, int k) {
        int needed = 0;
        for (int i = 1; i < arr.size(); i++) {
            double gap = arr[i] - arr[i - 1];
            needed += (int)(gap / mid);
            if (fabs(gap / mid - (int)(gap / mid)) < 1e-9) needed--;
        }
        return needed <= k;
    }

    double findSmallestMaxDist(vector<int>& arr, int k) {
            double l = 0, h = 0;
            for (int i = 1; i < arr.size(); i++) {
                h = max(h, (double)(arr[i] - arr[i - 1]));
            }
            double ans = h;
            while (h - l > 1e-6) {
                double mid = (l + h) / 2.0;
                if (check(arr, mid, k)) {
                    ans = mid;
                    h = mid;
                } else {
                    l = mid;
                }
            }
            return ans;
        }
};