class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;

        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            // ye loop tabhi chlega jb nums[i] ki value atleast 1 baar hogi map mei.
            for (int j : mp[nums[i]]) {

                if ((i * j) % k == 0){
                    c++;
                }
            }
            mp[nums[i]].push_back(i);
        }

        return c;
    }
};