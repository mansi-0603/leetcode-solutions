class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for (char ch : s) {
            if (isalpha(ch))
                st1.push(ch);
            else if (ch == '#') {
                if (!st1.empty()) {
                    st1.pop();
                }
            }
        }
        for (char ch : t) {
            if (isalpha(ch))
                st2.push(ch);
            else if (ch == '#'){
                if (!st2.empty()) {
                     st2.pop();
                }
            }
               
        }

        while (!st1.empty() && !st2.empty()) {
            if (st1.top() == st2.top()) {
                st1.pop();
        st2.pop();
            } else {
                return false;
            }
        }
        // if(!st1.empty() && !st2.empty()) return true;
        return st1.empty() && st2.empty()?  1: 0;
    }
};