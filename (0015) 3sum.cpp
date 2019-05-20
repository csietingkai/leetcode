class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		set<vector<int>> result_set = {};
		for (int i = 0; i < nums.size(); i++) {
			if (i != 0 && nums[i] == nums[i-1]) {
				continue;
			}
			int j = i + 1;
			int k = nums.size() - 1;
			while (j < k) {
				if (nums[i] + nums[j] + nums[k] == 0) {
					result_set.insert({nums[i], nums[j], nums[k]});
					j++;
				} else if (nums[i] + nums[j] + nums[k] < 0) {
					j++;
				} else {
					k--;
				}
			} 
		}
		vector<vector<int>> result(result_set.begin(), result_set.end());
		return result;
	}
};

