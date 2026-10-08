class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;

        string temp = "";

        for (int i = 0; i < s.size(); i++) {

            if(s[i] == '('){
                if(depth > 0){
                    temp += s[i];
                }
                depth ++;
            }else{
                depth --;
                if(depth > 0){
                    temp += s[i];
                }
            }
        }
        return temp;
    }
};