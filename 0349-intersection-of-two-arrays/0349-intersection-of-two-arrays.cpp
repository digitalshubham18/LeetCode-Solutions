class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int x = 0; x < nums2.size(); x++) {
            if (s.count(nums2[x])) {
                ans.push_back(nums2[x]);
                s.erase(nums2[x]);
            }
        }
        return ans;
    }
};