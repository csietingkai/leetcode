class Solution {
	vector<vector<char>> board;
public:
	void solveSudoku(vector<vector<char>>& board) {
		this->board = board;
		
		solve();
		
		board = this->board;
	}
	
	const bool solve() {
		int row = 0;
		int col = 0;
		if (!find_unsign(row, col)) {
			return true;
		} else {
			for (char num = '1'; num <= '9'; num++) {
				if (is_safe(row, col, num)) {
					this->board[row][col] = num;

					if (solve() == true) {
						return true;
					}

					this->board[row][col] = '.';
				}
			}
			return false;
		}
	}
	
	const bool find_unsign(int& row, int& col) {
		for(row = 0; row < 9; row++) {
			for(col = 0; col < 9; col++) {
				if(this->board[row][col] == '.') {
					return true;
				}
			}
		}
		return false;
	}
	
	const bool is_safe(const int row, const int col, const char num) {
		return !used_in_row(row, num) && !used_in_col(col, num) && !used_in_box(row - row%3 , col - col%3, num);
	}
	
	const bool used_in_row(const int row, const char num) {
		for (int col = 0; col < 9; col++) {
			if (this->board[row][col] == num) {
				return true;
			}
		}
		return false;
	}
	
	const bool used_in_col(const int col, const char num) {
		for (int row = 0; row < 9; row++) {
			if (this->board[row][col] == num) {
				return true;
			}
		}
		return false;
	}
	
	const bool used_in_box(const int row, const int col, const char num) {
		for (int r = 0; r < 3; r++) {
			for (int c = 0; c < 3; c++) {
				if(this->board[r+row][c+col] == num) {
					return true;
				}
			}
		}
		return false;
	}
};

