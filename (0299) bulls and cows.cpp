class Solution {
public:
	string getHint(string secret, string guess) {
		int a = 0;
		int b = 0;
		int record[10] = {0};
		for (int i = 0; i < secret.length(); i++) {
			if (secret.at(i) == guess.at(i)) {
				a++;
			} else {
				if (record[secret.at(i)-'0']++ < 0) {
					b++;
				}
				if (record[guess.at(i)-'0']-- > 0) {
					b++;
				}
			}
		}
		
		return to_string(a)+"A"+to_string(b)+"B";
	}
};
