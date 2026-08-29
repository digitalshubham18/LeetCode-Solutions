class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            
                arr.push_back(nums[i]);
            
        }
        sort(arr.begin(),arr.end(),greater<int>());
        return arr[k-1];
    }
};