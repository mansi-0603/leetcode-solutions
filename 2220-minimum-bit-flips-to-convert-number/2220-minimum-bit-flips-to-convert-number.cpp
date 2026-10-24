class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult = start ^ goal;
        int cnt = 0;

        while(xorResult > 0){

            xorResult &= (xorResult-1);
            cnt += 1;
        
        }

        return cnt;
    }
};