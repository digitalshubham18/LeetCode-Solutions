class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // unordered_map<int, int> freq;
        // int maxi=0;
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        //     maxi=max(maxi,freq[nums[i]]);
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(freq[nums[i]]==maxi)
        //     ans++;
        // }
        // return ans;

        int freq[101] = {0};
        int maxi = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            freq[x]++;

            if (freq[x] > maxi) {
                maxi = freq[x];
                ans = maxi;
            }
            else if (freq[x] == maxi) {
                ans += maxi;
            }
        }

        return ans;
    }
};