class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        vector<bool> pairXor(MAXX, false);
        vector<bool> ans(MAXX, false);

        int n = nums.size();

        // All XORs of two elements (i <= j)
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pairXor[nums[i] ^ nums[j]] = true;
            }
        }

        // XOR with third element
        for (int x = 0; x < MAXX; x++) {
            if (!pairXor[x]) continue;
            for (int v : nums) {
                ans[x ^ v] = true;
            }
        }

        return count(ans.begin(), ans.end(), true);
    }
};