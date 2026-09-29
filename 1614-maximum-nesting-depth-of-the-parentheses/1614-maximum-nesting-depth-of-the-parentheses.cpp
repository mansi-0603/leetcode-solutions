class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int track = 0;
        int maxC = INT_MIN;
        for (char ch : s) {
            if (ch != '(' && ch != ')') {
                continue;
            } else if (ch == '(') {
                st.push(ch);
                track++;
                maxC = max(track, maxC);
            } else if (ch == ')') {
                st.pop();
                track--;
            }
        }
        
        return maxC == INT_MIN? 0: maxC;
    }
};