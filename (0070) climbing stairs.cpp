class Solution {
	map<int, int> record = {{1, 1}, {2, 2}};
public:
	int climbStairs(int n) {
		map<int, int>::iterator it = this->record.find(n);
		if (it != this->record.end()) {
			return it->second;
		}
		
		int result = climbStairs(n-1) + climbStairs(n-2);
		this->record.insert(pair<int, int>(n, result));
		return result;
	}
};

