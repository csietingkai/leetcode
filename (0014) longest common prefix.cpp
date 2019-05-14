class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) {
			return "";
		}
		
		string common = strs[0];
		for (int i = 1; i < strs.size(); i++) {
			common = lcp(common, strs[i]);
		}
		return common;
	}
	
	const string lcp(const string a, const string b) {
		int length = min(a.length(), b.length());
		while (length >= 0) {
			if (a.substr(0, length).compare(b.substr(0, length)) == 0) {
				break;
			} else {
				length--;
			}
		}
		
		return a.substr(0, length);
	}
	
	inline const int min(const int a, const int b) {
		return b > a ? a : b;
	}
};

