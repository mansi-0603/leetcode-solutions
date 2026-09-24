class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ansIdx = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int sm = 0;

            while (nums[i] > 0) {
                sm += nums[i] % 10;
                nums[i] /= 10;
            }
            if (sm == i) {
                // we can normally return because we r traversing from left to right.
                return i;
            }
        }

        return ansIdx != INT_MAX ? ansIdx : -1;
    }
};