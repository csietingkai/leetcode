class Solution {
public:
	vector<int> numsSameConsecDiff(int N, int K) {
		set<int> cur = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		for (int i = 1; i < N; i++) {
			set<int> cur2;
			for (int c : cur) {
				if (c % 10 - K >= 0) {
					cur2.insert(c*10+(c%10-K));
				}
				if (c % 10 + K <= 9) {
					cur2.insert(c*10+(c%10+K));
				}
			}
			
			cur = cur2;
		}
		
		if (N == 1) {
			cur.insert(0);
		}
		
		vector<int> result(cur.begin(), cur.end());
		return result;
	}
};
