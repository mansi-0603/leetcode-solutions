class Solution {
public:
    bool checkString(string s) {
        string inV = "ba";

        if (s.find(inV) != string::npos)
            return false;

        return true;
    }
};