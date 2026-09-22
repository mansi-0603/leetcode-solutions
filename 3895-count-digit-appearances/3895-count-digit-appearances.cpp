class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;

        for (int x : nums) {
            if (x == 0) {
                if (x == digit) {
                    cnt++;
                }
                continue;
            }
            while (x > 0) {
                if (x % 10 == digit) {
                    cnt++;
                }
                x /= 10;
            }
        }
        return cnt;
    }
};