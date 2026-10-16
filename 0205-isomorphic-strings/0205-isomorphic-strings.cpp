
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0};
        int m2[256] = {0};
        for (int i = 0; i < s.size(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];
            if (m1[a] != m2[b])
                return false;
            m1[a] = i + 1;
            m2[b] = i + 1;
        }

        return true;
    }
};
