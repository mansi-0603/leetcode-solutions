class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        while (true) {

            // array - already sorted + non decreasing
            bool sort = true;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    sort = false;
                    break;
                }
            }
            if (sort)
                return ops;

            //  find leftmost minimum sum
            int minS = INT_MAX;
            int idx = -1;

            for (int i = 0; i < nums.size() - 1; i++) {
                int currS = nums[i] + nums[i + 1];
                if (currS < minS) {
                    minS = currS;
                    idx = i;
                }
            }

            // merge the min sum in the array
            nums[idx] = nums[idx] + nums[idx + 1];

            // erase the prev elmnt
            nums.erase(nums.begin() + idx + 1);

            // cnt no of operations
            ops++;
        }

        return ops;
    }
};