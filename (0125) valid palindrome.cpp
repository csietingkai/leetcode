class Solution {
public:
	bool isPalindrome(string s) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		s.erase(remove_if(s.begin(), s.end(), [](char c){return !((c>='a'&&c<='z')||(c>='0'&&c<='9'));}), s.end());
		string rev = s;
		reverse(rev.begin(), rev.end());
		return s.compare(rev) == 0;
	}
};

