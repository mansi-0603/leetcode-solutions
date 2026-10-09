class Solution {
public:
    int sumBase(int n, int k) {
        int sm = 0;

        while (n > 0) {

            int dgt = n % k;
            sm += dgt;
            n/= k;
        }

        return sm;
    }
};