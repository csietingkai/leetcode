class Solution {
public:
	vector<int> getRow(int rowIndex) {
		/*vector<int> result;
		int half_idx = (rowIndex % 2 == 0) ? (rowIndex/2+1) : (rowIndex/2);
		for (int i = 0; i < rowIndex+1; i++) {
			if (i == 0) {
				result.push_back(1);
			} else if (i == 1) {
				result.push_back(rowIndex);
			} else if (i > half_idx) {
				result.push_back(result[rowIndex-i]);
			} else {
				unsigned long long int value = result[i-1] * (rowIndex-i+1) / 2;
				result.push_back((int)value);
			}
		}
		return result;*/
		vector<vector<int>> result = {{1}};
		if (rowIndex == 0) {
			return result[0];
		}
		for (int i = 1; i < rowIndex+1; i++) {
			vector<int> pre_row = result[i-1];
			vector<int> row = {1};
			for (int j = 1; j < i; j++) {
				row.push_back(pre_row[j-1] + pre_row[j]);
			}
			row.push_back(1);
			result.push_back(row);
		}
		return result[rowIndex];
	}
};

