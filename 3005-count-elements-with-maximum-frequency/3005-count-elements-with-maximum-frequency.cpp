class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            maxi=max(maxi,freq[nums[i]]);
        }
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==maxi)
            ans++;
        }
        return ans;
        
    }
};