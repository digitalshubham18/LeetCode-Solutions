class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int cnt[26] = {};

        
        for(char ch : s) {
            cnt[ch - 'a']++;
        }

        int i = 0;
        while(i < target.size() && cnt[target[i] - 'a'] > 0) {
            cnt[target[i] - 'a']--;
            i++;
        }

        while(i >= 0) {

            if(i < target.size()) {

                for(int j = target[i] - 'a' + 1; j < 26; j++) {

                    if(cnt[j] > 0) {

                        string ans = target.substr(0, i);

                        
                        ans += char('a' + j);
                        cnt[j]--;

                        for(int k = 0; k < 26; k++) {
                            while(cnt[k] > 0) {
                                ans += char('a' + k);
                                cnt[k]--;
                            }
                        }

                        return ans;
                    }
                }
            }

            if(i == 0)
                break;

            i--;

            cnt[target[i] - 'a']++;
        }

        return "";
    }
};