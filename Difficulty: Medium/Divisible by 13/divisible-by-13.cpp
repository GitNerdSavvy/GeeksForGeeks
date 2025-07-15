class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int sum=0;
        int arr[6]= {1,10,9,12,3,4};
         int n = s.length();
        for (int i = n - 1, j = 0; i >= 0; i--, j++) {
            int digit = s[i] - '0';
            sum += arr[j % 6] * digit;
        }
         return sum % 13 == 0;
    }
};