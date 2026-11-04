class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int i = 1; i < n; i++) {
            int cnt = 1;
            string ans = "";

            for (int j = 0; j < s.size()-1; j++) {
                // condition
                if (s[j] == s[j + 1]) {
                    cnt++;
                } else {
                    ans += to_string(cnt);
                    ans.push_back(s[j]);

                    cnt = 1;
                }
            }

            // last grp append krna
            ans += to_string(cnt);
            ans.push_back(s.back());
            s = ans;
        }
        return s;
    }
};