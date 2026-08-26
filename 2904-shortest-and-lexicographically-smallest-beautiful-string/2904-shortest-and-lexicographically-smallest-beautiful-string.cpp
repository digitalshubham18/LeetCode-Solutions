class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        string ans = "";
        for (int right = 0; right < s.size(); right++) {
            if (s[right] == '1')
                ones++;
            while (ones > k) {
                if (s[left] == '1')
                    ones--;
                left++;
            }
            while (ones == k && s[left] == '0') {
                left++;
            }
            if (ones == k) {
                string cur = s.substr(left, right - left + 1);
                if (ans == "" ||
                    cur.length() < ans.length() ||
                    (cur.length() == ans.length() && cur < ans)) {
                    ans = cur;
                }
            }
        }

        return ans;
    }
};