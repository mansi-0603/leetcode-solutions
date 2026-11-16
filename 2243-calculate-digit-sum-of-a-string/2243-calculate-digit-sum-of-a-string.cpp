class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string temp = "";
            for (int i = 0; i < s.size(); i += k) {
                int sum = 0;
                string x = s.substr(i, k);
                for(int j = 0; j < x.size(); j++){
                    sum += (x[j] - '0');
                }
                temp += to_string(sum);
            }
            s = temp;
        }

        return s;
    }
};