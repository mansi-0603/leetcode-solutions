// use the fact that uppercase/lowercase versions of the same letter differ by
// 32 in ASCII

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else if (abs(st.top() - s[i]) == 32){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
       reverse(ans.begin(), ans.end());
        return ans;
    }
};