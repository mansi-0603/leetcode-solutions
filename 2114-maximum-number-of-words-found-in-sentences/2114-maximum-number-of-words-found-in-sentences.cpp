class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int wordC = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int s = sentences[i].size();
            int cnt = 1;
            for (int j = 0; j < s; j++) {

                if (sentences[i][j] == ' ') {
                    cnt++;
                }
                wordC = max(wordC, cnt);
            }
        }

        return wordC;
    }
};