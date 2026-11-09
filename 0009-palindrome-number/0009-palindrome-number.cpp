class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        long long rev = 0;
        while(x > 0){
            int digits = x % 10;
            rev = rev*10 + digits;
            x /= 10;
        }    
        if (org == rev) {
            return true;
        } else {
            return false;
        }
    }
};