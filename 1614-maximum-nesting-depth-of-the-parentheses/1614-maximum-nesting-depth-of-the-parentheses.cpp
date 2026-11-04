class Solution {
public:
    int maxDepth(string s) {
        int track = 0;
        int maxT = INT_MIN;

        for (char c : s) {
            if (c == '(') {
                track++;
            } else if (c == ')') {
                maxT = max(track, maxT);
                track--;
            }
        }
        return maxT == INT_MIN ? 0 : maxT;
    }
};