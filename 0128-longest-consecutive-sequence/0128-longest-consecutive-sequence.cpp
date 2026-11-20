class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        int maxL = 0;

        for(int num: nums){
            st.insert(num);
        }
        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int curr = it;

                while(st.find(curr+1) != st.end()){
                    curr++;
                    cnt++;
                }
                maxL = max(maxL, cnt);
            }
        }
        return maxL;
    }
};