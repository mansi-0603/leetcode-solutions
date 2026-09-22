class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x > 9) {
                while (x > 0) {
                    int dgt = x % 10;

                    if(dgt == digit){
                        cnt++;
                    }
                    x /= 10;
                }
            }else{
                if(x == digit){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};