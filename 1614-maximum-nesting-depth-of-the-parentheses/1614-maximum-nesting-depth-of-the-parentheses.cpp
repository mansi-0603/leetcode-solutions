class Solution {
public:
    int maxDepth(string s) {

        int track = 0;
        int maxC = INT_MIN;
        for (char ch : s) {
            if (ch == '(') {
                track++;
                maxC = max(track, maxC);
            } else if (ch == ')'){
                track--;
            }
        }

        return maxC == INT_MIN ? 0 : maxC;
    }
};