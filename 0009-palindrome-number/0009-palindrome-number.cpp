class Solution {
public:
    bool isPalindrome(int x) {
       int originalNum = x;
       long long reverseNum = 0;

       while(x >0){
        int lastdig = x % 10;
        reverseNum = (reverseNum * 10) + lastdig;
        x /= 10;
       }
       if(reverseNum == originalNum){
        return true;
       } 
       return false;
    }
};