class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) {
			return s;
		}
		
		vector<vector<char>> string_builder(numRows, vector<char>());
		int row_idx = 0;
		bool is_next_row_plus = true;
		for (int i = 0; i < s.length(); i++) {
			string_builder[row_idx].push_back(s.at(i));
			if (i % (numRows*2-2) == 0) {
				is_next_row_plus = true;
			} else if (i % (numRows-1) == 0 && i % (numRows*2-2) != 0) {
				is_next_row_plus = false;
			}
			
			if (is_next_row_plus) {
				row_idx++;
			} else {
				row_idx--;
			}
		}
		
		string result = "";
		for (int i = 0; i < string_builder.size(); i++) {
			for (int j = 0; j < string_builder[i].size(); j++) {
				result += string_builder[i][j];
			}
		}
		
		return result;
	}
};

