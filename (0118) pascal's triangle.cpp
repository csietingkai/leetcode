class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		if (numRows == 0) {
			return result;
		}
		result = {{1}};
		for (int i = 1; i < numRows; i++) {
			vector<int> pre_row = result[i-1];
			vector<int> row = {1};
			for (int j = 1; j < i; j++) {
				row.push_back(pre_row[j-1] + pre_row[j]);
			}
			row.push_back(1);
			result.push_back(row);
		}
		return result;
	}
};

