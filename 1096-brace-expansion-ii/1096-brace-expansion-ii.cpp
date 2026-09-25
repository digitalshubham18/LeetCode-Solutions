class Solution {
public:
    set<string> parse(string &s, int &i) {
        set<string> result;
        set<string> current = {""};
        while (i < s.size() && s[i] != '}') {
            if (s[i] == ',') {
                
                result.insert(current.begin(), current.end());
                current = {""};
                i++;
            }
            else {
                set<string> part;
                if (s[i] == '{') {
                    i++; 
                    part = parse(s, i);
                    i++; 
                    }
                else {
                    part.insert(string(1, s[i]));
                    i++;
                }
                set<string> next;

                for (string a : current) {
                    for (string b : part) {
                        next.insert(a + b);
                    }
                }

                current = next;
            }
        }
        result.insert(current.begin(), current.end());
        return result;
    }
    vector<string> braceExpansionII(string expression) {
        int i = 0;
        set<string> ans = parse(expression, i);
        return vector<string>(ans.begin(), ans.end());
    }
};