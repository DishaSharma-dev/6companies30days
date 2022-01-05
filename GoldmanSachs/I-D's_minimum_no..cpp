class Solution{
public:
    string printMinNumberForPattern(string S){
        // code here 
        string ans;
        stack<int> st;
        int num = 1;
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(st.size() > 0){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(st.size() > 0){
            ans += to_string(st.top());
            st.pop();
        }  
        return ans;
    }
};
