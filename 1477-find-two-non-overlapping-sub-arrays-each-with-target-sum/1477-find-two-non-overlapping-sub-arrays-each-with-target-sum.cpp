class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best(n + 1, -1);

        int left = 0;
        int sum = 0;
        int ans = -1;
        for (int right = 0; right < n; right++) {
            sum += arr[right];
            while (sum > target) {
                sum -= arr[left++];
            }
            best[right + 1] = best[right];

            if (sum == target) {
                int len = right - left + 1;

                if (best[left] != -1) {
                    int current = len + best[left];

                    if (ans == -1 || current < ans)
                        ans = current;
                }

                if (best[right + 1] == -1 ||
                    len < best[right + 1]) {
                    best[right + 1] = len;
                }
            }
        }
        return ans;
    }
};