class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int  minE = INT_MAX;
        for (int x : nums) {
            sum += x;
            minE = min(minE, x);
        }
        return sum - nums.size() * minE;
    }
};