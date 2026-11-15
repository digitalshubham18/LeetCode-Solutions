
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long odd = 0, even = 1, ans = 0;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum = (sum + arr[i]) % 2;

            if (sum == 0) {
                ans = (ans + odd) % MOD;
                even++;
            } else {
                ans = (ans + even) % MOD;
                odd++;
            }
        }

        return ans;
    }
};
