class Solution {
public:
	int myAtoi(string str) {
		 int out = 0;
		stringstream ss;
		ss << str;
		ss >> out;
		return out;
	}
};
