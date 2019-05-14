class Solution {
public:
	string countAndSay(int n) {
		string result = "1";
		if (n <= 1) {
			return result;
		}
		int level = 1;
		while (level < n) {
			int counter = 1;
			char current_char = result.at(0);
			string temp = "";
			
			for (int i = 1; i < result.length(); i++) {
				if (result.at(i) == current_char) {
					counter++;
				} else {
					temp += to_string(counter);
					temp += current_char;
					counter = 1;
					current_char = result[i];
				}
			}
			temp += to_string(counter);
			temp += current_char;
			result = temp;
			
			level++;
		}
		return result;
	}
};

