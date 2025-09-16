class Solution {
  public:
    
    int f(int a, int b){
        int ans = a / b;
        if(a % b != 0 && ((a < 0) ^ (b < 0))) ans--; 
        return ans;
    }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        
         stack<int> st;
        for(auto &it : arr){
            if(it=="+" || it=="-" || it=="*" || it=="/" || it=="^"){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int c = 0;
                if(it=="+") c = b + a;
                else if(it=="-") c = b - a;
                else if(it=="*") c = b * a;
                else if(it=="/") c = f(b, a);
                else if(it=="^") c = (int)pow(b, a);
                st.push(c);
            }else{
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};