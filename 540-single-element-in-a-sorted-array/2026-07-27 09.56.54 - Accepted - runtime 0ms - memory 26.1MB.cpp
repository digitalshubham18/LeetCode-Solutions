class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //     for(int i=0;i<nums.size()-1;i+=2){
    //         if(nums[i]!=nums[i+1]){
    //             return nums[i];
    //         }
    //     }
    //     return nums[nums.size()-1];
        
    // }
     int xr=0;
    for(int i=0;i<nums.size();i++){
       
        xr^=nums[i];
    }
    return xr;
    }
};