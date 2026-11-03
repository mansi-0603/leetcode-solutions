class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x != 0){
            int dgts = x % 10;
            x /= 10;
            // overflow check kro
            if(rev > INT_MAX/10 || rev == INT_MAX/10 && dgts > 7){
                return 0;
            }if(rev < INT_MIN/10 || rev == INT_MIN/10 && dgts < -8){
                return 0;
            }
            rev = rev * 10 + dgts;
        }
        return rev;
    }
};