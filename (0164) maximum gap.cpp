class Solution {
public:
	int maximumGap(vector<int>& nums) {
		int max_gap = -1;
		
		if (nums.size() <= 1) {
			return 0;
		}
		
		sort(nums.begin(), nums.end());
		
		for (int i = 1; i < nums.size(); i++) {
			int gap = nums[i] - nums[i-1];
			if (gap > max_gap) {
				max_gap = gap;
			}
		}
		
		return max_gap;
	}
};
