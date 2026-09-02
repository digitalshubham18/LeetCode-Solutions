class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxproduct=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     int product=1;
        //     for(int j=i;j<nums.size();j++){
        //         product*=nums[j];
        //         maxproduct=max(maxproduct,product);
        //     }
        // }
        // return maxproduct;
        int n =nums.size();
        int pref=1;
        int suff=1;
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            pref*=nums[i];
            suff*=nums[n-i-1];
            ans = max(ans,max(pref,suff));
        }
        return ans;
    }
};