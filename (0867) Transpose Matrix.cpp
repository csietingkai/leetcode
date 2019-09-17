class Solution {
public:
	vector<vector<int>> transpose(vector<vector<int>>& A) {
		vector<vector<int>> transed(A[0].size(), vector<int>(A.size(), 0));
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A[0].size(); j++) {
				transed[j][i] = A[i][j];
			}
		}
		
		return transed;
	}
};
