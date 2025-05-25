class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
       unordered_map<int,int>mp;
       for(int it : arr){
           mp[it*it]++;
       }
       for(int i=0;i<arr.size();i++){
           for(int j=i+1;j<arr.size();j++){
               if(mp[arr[i]*arr[i]+arr[j]*arr[j]]) return true;
           }
       }
       return false;
    }
};