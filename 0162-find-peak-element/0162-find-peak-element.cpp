class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int e = nums.size() - 1;
        int mid = st + (e - st) / 2;
        while (st < e) {

            if (nums[mid + 1] > nums[mid]) {
                st = mid + 1;
            } else {
                e= mid;
            }
            mid = st + (e - st) / 2;
        }
        return e;
    }
};