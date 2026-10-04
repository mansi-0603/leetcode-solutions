class Solution {
public:
    string decodeString(string s) {

        stack<pair<int, string>> st;
        int num = 0;
        string curr = "";
        for (char ch : s) {

            // 1. Digit
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            // 2. Opening bracket
            else if (ch == '[') {
                st.push({num, curr});

                num = 0;
                curr = "";
            }

            // 3. Alphabet
            else if (isalpha(ch)) {
                curr += ch;
            }

            // 4. Closing bracket
            else if (ch == ']') {

                auto [repeat, previous] = st.top();
                st.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = previous + temp;
            }
        }

        return curr;
    }
};