class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0){ 
        return 0;
        }
        unordered_set<char> charSet;
        int left = 0, maxLength = 0;
        
        for (int right = 0; right < n; right++) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
        
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};