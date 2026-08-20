class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        vector<int> ans;

        for (int i = mn + 1; i < mx; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};