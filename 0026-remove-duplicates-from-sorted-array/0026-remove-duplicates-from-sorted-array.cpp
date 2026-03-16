class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     vector<int> temp;

    //     for(int i = 0; i < nums.size(); i++) {

    //         bool found = false;

    //         for(int j = 0; j < temp.size(); j++) {
    //             if(nums[i] == temp[j]) {
    //                 found = true;
    //                 break;
    //             }
    //         }

    //         if(!found) {
    //             temp.push_back(nums[i]);
    //         }
    //     }

    //     for(int i = 0; i < temp.size(); i++) {
    //         nums[i] = temp[i];
    //     }

    //     return temp.size();
    // } 


    //Above solution is a brute force approach






    //   vector<int> temp;

    //     temp.push_back(nums[0]);

    //     for(int i = 1; i < nums.size(); i++) {
    //         if(nums[i] != nums[i-1]) {
    //             temp.push_back(nums[i]);
    //         }
    //     }

    //     for(int i = 0; i < temp.size(); i++) {
    //         nums[i] = temp[i];
    //     }

    //     return temp.size();
    // }


//this is slightly better appraoch but it uses some extra space

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