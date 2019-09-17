class Solution {
public:
	string addBinary(string a, string b) {
		string result = "";
		int ai = a.length()-1;
		int bi = b.length()-1;
		int carry = 0;
		while (ai >= 0 || bi >= 0) {
			int sum = carry;
			if (ai >= 0) {
				sum += a.at(ai)-'0';
				ai--;
			}
			if (bi >= 0) {
				sum += b.at(bi)-'0';
				bi--;
			}
			result += (char)(sum%2+'0');
			carry = sum / 2;
		}
		if (carry != 0) {
			result += (char)(carry+'0');
		}
		
		return reverse(result);
	}
private:
	string reverse(const string &str) {
		string rev;
		string::const_reverse_iterator it = str.crbegin();
		while (it != str.crend()) {
			rev = rev.append(1, *(it++));
		}
		return rev;
	}
};

