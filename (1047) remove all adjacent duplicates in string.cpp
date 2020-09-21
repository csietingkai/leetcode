class Solution {
public:
	string removeDuplicates(string S) {
		for (int i = 1; i < S.length(); i++) {
			if (S[i-1] == S[i]) {
				return removeDuplicates(S.substr(0, i-1) + S.substr(i+1, S.length() - i));
			}
		}
		return S;
	}
};

