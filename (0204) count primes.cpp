class Solution {
public:
	int countPrimes(int n) {
		int count = 0;
		
		vector<bool> is_prime(n, true);
		for (int i = 2; i < n; i++) {
			if (is_prime[i]) {
				count++;
				for (int j = 2; j < n/i+1; j++) {
					is_prime[i*j] = false;
				}
			}
		}
		
		return count;
	}
};

