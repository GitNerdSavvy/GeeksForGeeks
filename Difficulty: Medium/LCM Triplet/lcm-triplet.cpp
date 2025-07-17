class Solution {
  public:
    int lcmTriplets(int n) {
        // code here
         if(n<=2) return n;

        if((n&1)==1) return (n-2)*(n-1)*(n);

        if((n%3)==0) return (n-2)*(n-1)*(n-3);

        return (n-3)*(n-1)*(n);
    }
};