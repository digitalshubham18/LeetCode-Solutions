class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> pos;

        // Store indices where nums[i] == x
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                pos.push_back(i);
        }

        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {
        int k = queries[i];
    

            if (k <= pos.size())
                ans.push_back(pos[k - 1]);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};