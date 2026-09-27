class Solution {
public:
    string reverseParentheses(string s) {
        string res = "";
        stack<char> st;

        for (char ch : s) {
            if (st.empty()) {
                st.push(ch);
            } else if (ch != ')') {
                st.push(ch);
            } else {
                string temp = "";
                if (ch == ')') {
                    while (st.top() != '(') {
                        temp += st.top();
                        st.pop();
                    }
                }
                if (st.top() == '(') {
                    st.pop();
                }
                for (char c : temp) {
                    st.push(c);
                }
            }
        }
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
