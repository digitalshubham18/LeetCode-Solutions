class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0];
        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=i;j<nums.size();j++){
                product*=nums[j];
                maxproduct=max(maxproduct,product);
            }
        }
        return maxproduct;
    }
};