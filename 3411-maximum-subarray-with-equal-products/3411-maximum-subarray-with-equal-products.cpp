class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int mx = *max_element(nums.begin(), nums.end());
        long long ml = 1;
        for (int x : nums) {
            ml = lcm(ml, (long long)x);
        }

        long long limit = ml * mx;

        for (int i = 0; i < n; i++) {
            long long product = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {
                int x = nums[j];
                if (product > limit / x)
                    break;

                product *= x;
                g = gcd(g, (long long)x);
                l = l / gcd(l, (long long)x) * x;

                if (product == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};