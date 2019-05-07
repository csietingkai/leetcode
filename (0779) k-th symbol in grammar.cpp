class Solution {
public:
	int kthGrammar(unsigned int N, unsigned int K) {
		if (N == 1) return 0;
		return (~K & 1) ^ kthGrammar(N - 1, (K + 1) / 2);
	}
};

