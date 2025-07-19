class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int sum=0;
        priority_queue<int, vector<int> , greater<int> >pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int t1=pq.top();
            pq.pop();
            int t2=pq.top();
            pq.pop();
            sum+=t1+t2;
            pq.push(t1+t2);
        }
        return sum;
    }
};