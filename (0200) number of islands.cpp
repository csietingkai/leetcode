class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {
		if (grid.empty() || grid[0].empty()) {
			return 0;
		}
		
		int counter = 0;
		
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				if (grid[i][j] == '1') {
					counter++;
					delete_island(grid, i, j);
				}
			}
		}
		
		return counter;
	}
	
	void delete_island(vector<vector<char>>& grid, int row, int col) {
		if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) {
			return;
		}
		if (grid[row][col] == '0') {
			return;
		}
		
		grid[row][col] = '0';
		delete_island(grid, row-1, col);
		delete_island(grid, row, col-1);
		delete_island(grid, row+1, col);
		delete_island(grid, row, col+1);
	}
};

