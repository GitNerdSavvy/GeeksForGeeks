class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int n1=s1.length();
        int n2=s2.length();
        int l=0,h=0;
        while(l<n1 && h<n2){
            if(s1[l]==s2[h]){
                l++;
                h++;
            }else{
                h++;
            }
        }
        return l==n1;
        
    }
};