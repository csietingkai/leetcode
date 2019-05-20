class Solution {
public:
	int romanToInt(string s) {
		if (s.length() == 0) {
			return 0;
		}
		
		map<char, int> roman;
		roman.insert(pair<char, int>('I', 1));
		roman.insert(pair<char, int>('V', 5));
		roman.insert(pair<char, int>('X', 10));
		roman.insert(pair<char, int>('L', 50));
		roman.insert(pair<char, int>('C', 100));
		roman.insert(pair<char, int>('D', 500));
		roman.insert(pair<char, int>('M', 1000));
		
		int num = roman[s.at(s.length()-1)];
		for (int i = s.length() - 2; i >= 0; i--) {
			if (roman[s.at(i)] >= roman[s.at(i + 1)]) {
				num += roman[s.at(i)];
			} else {
				num -= roman[s.at(i)];
			}
		}
		
		return num;
	}
};

