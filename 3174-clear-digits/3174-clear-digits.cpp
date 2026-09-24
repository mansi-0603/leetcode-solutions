class Solution {
public:
    string clearDigits(string s) {

        string ans = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                // if char is not digit then simply add it to the result string
                ans += s[i];
            } else {
                //if char is digit then
               // dlt the last elemt for answer string
               ans.pop_back();
            }
        }
        return ans;
    }
};