class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        if(type==2 ){
            while(k>0){
                
            int t=dq.front();
            dq.pop_front();
            dq.push_back(t);
            k--;
            }
        }else{
            while(k>0){
                
            int t=dq.back();
            dq.pop_back();
            dq.push_front(t);
            k--;
            }
            
        }
        
    }
};