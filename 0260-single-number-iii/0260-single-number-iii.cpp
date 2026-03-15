class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++)
            x = x ^ nums[i];

        unsigned int ux = (unsigned int)x;
        unsigned int diff = ux & (-ux);

        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & diff)
                a = a ^ nums[i];
            else
                b = b ^ nums[i];
        }

        return {a, b};
    }
};