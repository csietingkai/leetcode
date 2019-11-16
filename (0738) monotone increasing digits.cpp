class Solution {
public:
	int monotoneIncreasingDigits(int N) {
		while (!isMonotone(N)) {
			N = N - (N%10+1);
		}
		return N;
	}
private:
	const bool isMonotone(int number) {
		int digit = number%10;
		while (number > 9) {
			number /= 10;
			int currentDigit = number % 10;
			if (currentDigit > digit) {
				return false;
			}
			digit = currentDigit;
		}
		return true;
	}
};

