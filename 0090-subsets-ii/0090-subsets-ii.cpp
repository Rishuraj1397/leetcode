class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        ans.push_back(ds);

        for(int i = start; i < nums.size(); i++) {
            if(i > start && nums[i] == nums[i-1]) continue;

            ds.push_back(nums[i]);
            backtrack(i + 1, nums, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> ds;

        backtrack(0, nums, ds, ans);

        return ans;
    }
};