class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		set<pair<int, int>> zero_idxs;
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[0].size(); j++) {
				if (matrix[i][j] == 0) {
					zero_idxs.insert({i, j});
				}
			}
		}
		
		for (auto idx : zero_idxs) {
			int x = idx.first;
			int y = idx.second;
			for (int i = 0; i < matrix.size(); i++) {
				matrix[i][y] = 0;
			}
			for (int j = 0; j < matrix[0].size(); j++) {
				matrix[x][j] = 0;
			}
		}
	}
};

