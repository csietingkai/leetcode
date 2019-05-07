class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		bool carry = false;
		for (int i = digits.size()-1; i >= 0; i--) {
			digits[i]++;
			if (digits[i] >= 10) {
				digits[i] -= 10;
				carry = true;
			} else {
				carry = false;
			}
			if (!carry) {
				break;
			}
		}
		if (carry) {
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
};

