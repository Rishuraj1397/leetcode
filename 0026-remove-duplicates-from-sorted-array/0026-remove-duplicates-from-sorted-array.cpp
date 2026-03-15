class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;//this is edge case 
        }

        int j = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};//1,1,2,2,3,4,4