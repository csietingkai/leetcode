class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> result = {};
		for (int i = 1; i <= n; i++) {
			string str = "";
			if (i % 3 == 0) {
				str += "Fizz";
			}
			if (i % 5 == 0) {
				str += "Buzz";
			}
			if (str.length() > 0) {
				result.push_back(str);
			} else {
				result.push_back(to_string(i));
			}
		}
		return result;
	}
};

