
class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        int i = 0, n = s.size();
        while (i < n) {
            if (isdigit(s[i])) {
                int num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                if (num <= prev) return false;
                prev = num;
            } else {
                i++;
            }
        }
        return true;
    }
};
