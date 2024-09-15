class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long rev = 0;
        int original = x;
        while(original > 0){
            int digit = original % 10 ;
            rev = rev *10 + digit;
            original = original /10;
        }
        return rev == x;
    }
};