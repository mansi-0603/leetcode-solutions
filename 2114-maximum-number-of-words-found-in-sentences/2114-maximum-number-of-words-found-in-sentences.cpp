class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int word = 0;

        int n = sentences.size();

        for (int i = 0; i < n; i++) {
            int count = 1;
            int m = sentences[i].size();

            for (int j = 0; j < m; j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            word = max(word, count);
        }

        return word;
    }
};