class Solution {
public:
	int firstUniqChar(string s) {
		vector<int> record(26, 0);
		for (int i = 0; i < s.length(); i++) {
			record[s.at(i)-'a']++;
		}
		int letter = -1;
		for (int i = 0; i < s.length(); i++) {
			if (record[s.at(i)-'a'] == 1) {
				letter = i;
				break;
			}
		}
		return letter;
	}
};

