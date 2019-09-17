class Solution {
public:
	const static int MOD = 1000000007;
		
	int countPalindromicSubsequences(string S) {
		const int length = S.length();
		this->result = vector<vector<int>>(length+1, vector<int>(length+1, 0));
		return calc(S, 0, length-1);
	}
private:
	vector<vector<int>> result;
	
	const long calc(const string& str, const int start, const int end) {
		if (start > end) {
			return 0;
		}
		if (start == end) {
			return 1;
		}
		
		if (result[start][end] > 0) {
			return result[start][end];
		}
		
		long ans = 0;
		if (str.at(start) == str.at(end)) {
			int left = start+1;
			int right = end-1;
			while (left <= right && str.at(left) != str.at(start)) {
				left++;
			}
			while (left <= right && str.at(right) != str.at(start)) {
				right--;
			}
			
			if (left > right) {
				ans = calc(str, start+1, end-1)*2+2;
			} else if (left == right) {
				ans = calc(str, start+1, end-1)*2+1;
			} else {
				ans = calc(str, start+1, end-1)*2-calc(str, left+1, right-1);
			}
		} else {
			ans = calc(str, start, end-1) + calc(str, start+1, end) - calc(str, start+1, end-1);
		}
		
		return result[start][end] = (ans + Solution::MOD) % Solution::MOD;
	}
};

