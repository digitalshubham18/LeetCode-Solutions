class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int slow=nums[0];
        // int fast=nums[0];
        // do{
        //     slow=nums[slow];
        //     fast=nums[nums[fast]];
        // }
        // while(slow!=fast);
        //     slow=nums[0];
        //     while(slow!=fast){
        //         slow=nums[slow];
        //         fast=nums[fast];
        //     }
        //     return slow;


                int n = nums.size();
        int low = 1, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;

            for (int i = 0; i < n; i++) {
                if (nums[i] <= mid) {
                    count++;
                }
            }

            if (count > mid) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};