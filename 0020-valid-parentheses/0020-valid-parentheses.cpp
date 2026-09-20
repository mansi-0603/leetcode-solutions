class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for (char ch : s) {
            // for opening bracket
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                // for closing brakcet

                // phle stack check kro - empty toh false
                if (st.empty())
                    return false;

                // if not empty then check kro match opening bracket ka
                if (st.top() == '(' && ch == ')' ||
                    st.top() == '[' && ch == ']' ||
                    st.top() == '{' && ch == '}') {

                    // match found
                    st.pop();
                } else {
                    // match not found
                    return false;
                }
            }
        }
        return st.empty() ? 1 : 0;
    }
};