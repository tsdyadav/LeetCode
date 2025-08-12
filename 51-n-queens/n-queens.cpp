class Solution {

    private:
    bool isValid(int row, int col, int n, vector<string>& board) {
        // Check column
        for (int i = 0; i < row; ++i) {
            if (board[i][col] == 'Q') return false;
        }
        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
            if (board[i][j] == 'Q') return false;
        }
        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j) {
            if (board[i][j] == 'Q') return false;
        }
        return true;
    }

    void solve(int row, int n, vector<string>& board, vector<vector<string>>& solutions) {
        if (row == n) {
            solutions.push_back(board);
            return;
        }
        for (int col = 0; col < n; ++col) {
            if (isValid(row, col, n, board)) {
                board[row][col] = 'Q';
                solve(row + 1, n, board, solutions);
                board[row][col] = '.'; // Backtrack
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));
        solve(0, n, board, solutions);
        return solutions; 
    }
};