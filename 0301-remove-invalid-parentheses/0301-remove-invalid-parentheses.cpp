class Solution {
public:
    void dfs(string &s, int index, int balance,
             int leftRemove, int rightRemove,
             string &path, set<string> &ans) {

        if (index == s.length()) {
            if (balance == 0 &&
                leftRemove == 0 &&
                rightRemove == 0) {
                ans.insert(path);
            }
            return;
        }

        char c = s[index];

        if (c == '(' && leftRemove > 0) {
            dfs(s, index + 1, balance,
                leftRemove - 1, rightRemove,
                path, ans);
        }

        if (c == ')' && rightRemove > 0) {
            dfs(s, index + 1, balance,
                leftRemove, rightRemove - 1,
                path, ans);
        }

        path.push_back(c);

        if (c != '(' && c != ')') {
            dfs(s, index + 1, balance,
                leftRemove, rightRemove,
                path, ans);
        }
        else if (c == '(') {
            dfs(s, index + 1, balance + 1,
                leftRemove, rightRemove,
                path, ans);
        }
        else if (c == ')' && balance > 0) {
            dfs(s, index + 1, balance - 1,
                leftRemove, rightRemove,
                path, ans);
        }

        path.pop_back();
    }

    vector<string> removeInvalidParentheses(string s) {

        set<string> ans;

        int leftRemove = 0;
        int rightRemove = 0;

        for (int i = 0; i < s.length(); i++) {

            char c = s[i];

            if (c == '(') {
                leftRemove++;
            }
            else if (c == ')') {

                if (leftRemove > 0) {
                    leftRemove--;
                }
                else {
                    rightRemove++;
                }
            }
        }

        string path = "";

        dfs(s, 0, 0,
            leftRemove, rightRemove,
            path, ans);

        return vector<string>(ans.begin(), ans.end());
    }
};