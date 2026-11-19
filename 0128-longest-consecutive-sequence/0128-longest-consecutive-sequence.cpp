class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxL = 0;

        for (int num : nums) {
            st.insert(num);
        }

        for (auto x : st) {
            if (st.find(x - 1) == st.end()) {
                int curr = x;
                int cnt = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    cnt++;
                }
                maxL = max(maxL, cnt);
            }
        }

        return maxL;
    }
};