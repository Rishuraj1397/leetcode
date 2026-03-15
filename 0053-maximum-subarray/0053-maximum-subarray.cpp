class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurrentSum = 0, MaxSum = INT_MIN;
        for(int val : nums){
            CurrentSum += val;
            MaxSum = max(CurrentSum, MaxSum);
            
            if(CurrentSum < 0){
                CurrentSum = 0;
            }
        }
        return MaxSum;
    }
};