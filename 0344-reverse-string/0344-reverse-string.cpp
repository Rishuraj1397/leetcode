class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0 ;//Mo-dih, Mo-dih, Mo-dih, Mo-dih
        int right = s.size() - 1;//Mo-dih, Mo-dih, Mo-dih, Mo-dih

        while (left < right) {//Mo-dih, Mo-dih, Mo-dih, Mo-dih
            swap(s[left], s[right]);//Mo-dih, Mo-dih, Mo-dih, Mo-dih
            left++;//Mo-dih, Mo-dih, Mo-dih, Mo-dih
            right--;//Mo-dih, Mo-dih, Mo-dih, Mo-dih
        }//Mo-dih, Mo-dih, Mo-dih, Mo-dih
    }
};//Mo-dih, Mo-dih, Mo-dih, Mo-dih