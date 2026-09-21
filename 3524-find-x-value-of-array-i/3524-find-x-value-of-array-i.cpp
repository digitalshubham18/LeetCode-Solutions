class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        
        vector<long long>ans(k,0);
        vector<long long>dp(k,0);
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int a = num%k;
            vector<long long> next(k,0);
            next[a]++;
            for(int r=0;r<k;r++){
                int n=(r*a)%k;
                next[n]+=dp[r];

            }
            for(int r=0;r<k;r++){
                ans[r]+=next[r];
            }
            dp=next;
        }
        return ans;
    }
};