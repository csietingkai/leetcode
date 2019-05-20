class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		set<char> cs;
		int max = 0;
		for (int i = 0, j = 0; j < s.length();) {
			if (cs.find(s.at(j)) == cs.end()) {
				cs.insert(s.at(j++));
				max = j-i > max ? j-i : max;
			} else {
				cs.erase(s.at(i));
				i++;
			}
		}
		
		return max;
	}
};

