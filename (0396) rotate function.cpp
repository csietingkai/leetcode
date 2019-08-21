class Solution {
public:
	int maxRotateFunction(vector<int>& A) {
		if (A.size() == 0) {
			return 0;
		}
		
		long asum = accumulate(A.begin(), A.end(), 0L);
		long fn = 0;
		for (int i = 0; i < A.size(); i++) {
			fn += i * A[i];
		}
		
		long max = fn;
		for (int i = 0; i < A.size()-1; i++) {
			fn = fn + asum - A.size()*A[A.size()-i-1];
			if (fn > max) {
				max = fn;
			}
		}
		return (int)max;
	}
};

