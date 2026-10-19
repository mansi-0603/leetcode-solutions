class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            if (freq.find(s[i]) == freq.end()) {
                q.push(i);
            }
            freq[s[i]]++;
            while (q.size() > 0 && freq[s[q.front()]] > 1) {
                q.pop();
            }
        }
        return q.empty() ? -1 : q.front();
    }
};