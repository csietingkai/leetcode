class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.length() == 0) {
			return 0;
		}
		for (int i = 0; i < haystack.length(); i++) {
			if (haystack.at(i) == needle.at(0)) {
				string sub = haystack.substr(i, needle.length());
				if (sub.compare(needle) == 0) {
					return i;
				}
			}
		}
		return -1;
	}
};

