class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        string res = "";
        // mapping knowledge
        for (auto ch : knowledge) {
            mp[ch[0]] = ch[1];
        }

        // traverse string
        for (int i = 0; i < s.size(); i++) {
            string key = "";
            if (s[i] != '(') {
                res += s[i];
            } else {
                i++;
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }
                if (mp.find(key) != mp.end()) {
                    res += mp[key];
                } else {
                    res += "?";
                }
            }
        }
        return res;
    }
};