class Solution {
public:
    vector<vector<string>> ans;
    vector<bool> col, diag1, diag2;
    void backtrack(int row, int n, vector<string>& board) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            int d1 = row - i + n - 1;
            int d2 = row + i;
            if (col[i] || diag1[d1] || diag2[d2])
                continue;
            board[row][i] = 'Q';
            col[i] = diag1[d1] = diag2[d2] = true;
            backtrack(row + 1, n, board);
            board[row][i] = '.';
            col[i] = diag1[d1] = diag2[d2] = false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        col.assign(n, false);
        diag1.assign(2 * n - 1, false);
        diag2.assign(2 * n - 1, false);
        vector<string> board(n, string(n, '.'));
        backtrack(0, n, board);

        return ans;
    }
};