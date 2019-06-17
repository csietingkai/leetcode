class Solution {
public:
	int numTrees(int n) {
		// f(0) = 1
		// f(n) = f(0)*f(n-1) + f(1)*f(n-2) + ... + f(n-2)*f(1) + f(n-1)*f(0)
		
		map<int,int> record = {
			{0, 1},
			{1, 1}
		};
		return recursive(record, n);
	}
	
	int recursive(map<int,int>& nums, int n) {
		if (nums.find(n) != nums.end()) {
			return nums[n];
		}
		
		int sum = 0;
		for(int i = 1; i <= n; i++) {
			sum += recursive(nums, i-1) * recursive(nums, n-i);
		}
		nums.insert(pair<int,int>(n, sum));
		return sum;
	}
};

