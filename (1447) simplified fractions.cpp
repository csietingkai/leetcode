class Solution {
public:
	vector<string> simplifiedFractions(int n) {
		set<string> result;
		if (n == 1) {
			return vector<string>(result.begin(), result.end());
		}
		for (int denominator = 2; denominator <= n; denominator++) {
			for (int fraction = 1; fraction < n; fraction++) {
				int d = denominator / gcd(denominator, fraction);
				int f = fraction / gcd(denominator, fraction);
				if (f/d == 0) {
					result.insert(std::to_string(f)+"/"+std::to_string(d));
				}
			}
		}
		return vector<string>(result.begin(), result.end());
	}

private:
	int gcd(int a, int b) {
		if (b == 0) {
			return a;
		}
		return gcd(b, a % b);  
	}
};

