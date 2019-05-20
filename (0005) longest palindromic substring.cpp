class Solution {
public:
	string longestPalindrome(string s) {
		int start = 0;
		int end = 0;
		for (int i = 0; i < s.length(); i++) {
			int len1 = expand_around_center(s, i, i);
			int len2 = expand_around_center(s, i, i+1);
			int len = len1 > len2 ? len1 : len2;
			if (end - start < len) {
				start = i - (len - 1) / 2;
				end = i + len / 2;
			}
		}
		return s.substr(start, end-start+1);
	}
	
	int expand_around_center(string s, int left, int right) {
		int l = left;
		int r = right;
		while (l >= 0 && r < s.length() && s.at(l) == s.at(r)) {
			l--;
			r++;
		}
		return r - l - 1;
	}
};

