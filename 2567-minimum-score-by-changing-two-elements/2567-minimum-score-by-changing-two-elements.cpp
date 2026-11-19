class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        // if(n<=2){
        //     return 0;
        // }
        // sort(nums.begin(),nums.end());
        // int ans=INT_MAX;
        // ans=min(ans,nums[n-3]-nums[0]);
        // ans=min(ans,nums[n-2]-nums[1]);
        // ans=min(ans,nums[n-1]-nums[2]);
        // return ans;
        
        sort(nums.begin(), nums.end());
        return min({
            nums[n - 3] - nums[0],
            nums[n - 2] - nums[1],
            nums[n - 1] - nums[2]
        });
    }
};

    