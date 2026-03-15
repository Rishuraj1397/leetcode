class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;

        int dup = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;

            if (sum > INT_MAX / 10)
                return false;

            sum = sum * 10 + digit;
            n /= 10;
        }

        return dup == sum;
    }
};