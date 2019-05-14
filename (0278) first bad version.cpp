// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		while (n--) {
			if (!isBadVersion(n)) {
				return n+1;
			}
		}
		return 1;
	}
};

