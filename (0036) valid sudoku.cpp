class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		for (int row = 0; row < 9; row++) {
			vector<bool> used_in_row(9, false);
			for (int col = 0; col < 9; col++) {
				if (board[row][col] == '.') {
					continue;
				}
				int num = board[row][col] - '0';
				if (used_in_row[num]) {
					return false;
				}
				used_in_row[num] = true;
			}
		}
		
		for (int col = 0; col < 9; col++) {
			vector<bool> used_in_col(9, false);
			for (int row = 0; row < 9; row++) {
				if (board[row][col] == '.') {
					continue;
				}
				int num = board[row][col] - '0';
				if (used_in_col[num]) {
					return false;
				}
				used_in_col[num] = true;
			}
		}
		
		for (int block_row = 0; block_row < 3; block_row++) {
			for (int block_col = 0; block_col < 3; block_col++) {
				vector<bool> used_in_block(9, false);
				for (int row = 0; row < 3; row++) {
					for (int col = 0; col < 3; col++) {
						char num = board[row+block_row*3][col+block_col*3];
						if (num == '.') {
							continue;
						}
						num -= '0';
						if (used_in_block[num]) {
							return false;
						}
						used_in_block[num] = true;
					}
				}
			}
		}
		
		return true;
	}
};

