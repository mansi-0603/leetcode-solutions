class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con = INT_MIN;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
            } else if (nums[i] == 0) {
                con = max(con, cnt);
                cnt = 0;
            }
        }
        con = max(con, cnt);
        return con;
    }
};