class Solution {
public:
    int countPairs(vector<int>& nums, int k) {

        unordered_map<int, unordered_map<int, int>> mp;

        vector<int> divisors;

        for (int d = 1; d <= k; d++) {
            if (k % d == 0) {
                divisors.push_back(d);
            }
        }

        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {

            int g = gcd(i, k);
            int d = k / g;

            // Count valid previous indices
            cnt += mp[nums[i]][d];

            // Update frequencies
            for (int x : divisors) {
                if (i % x == 0) {
                    mp[nums[i]][x]++;
                }
            }
        }

        return cnt;
    }
};