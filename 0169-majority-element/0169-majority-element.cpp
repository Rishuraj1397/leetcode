class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // for (int val : nums) {
        //     int freq = 0;

        //     for (int el : nums) {
        //         if (el == val) {
        //             freq++;
        //         }
        //     }
        //     if (freq > n / 2) {
        //         return val;
        //     }
        // }
        // return -1;

        //     // ---> slightly optimized approach

        //     int n = nums.size();

        //     sort(nums.begin(), nums.end());

        //     // freq count

        //     int frq = 1, ans = nums[0];

        //     for (int i = 1; i < n; i++) {
        //         if (nums[i] == nums[i - 1]) {
        //             frq++;
        //         } else {
        //             frq = 1;
        //             ans = nums[i];
        //         }

        //         if (frq > n / 2) {
        //             return ans;
        //         }
        //     }
        //     return ans;
        // }

        // -----> Mooore's voting algorithm for most optimized sol

        int freq = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};