class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result = {};
		for (unsigned int i = 0; i < nums.size(); i++) {
			int another_num = target - nums[i];
			std::vector<int>::iterator it = std::find(nums.begin(), nums.end(), another_num);
			if (it != nums.end()) {
				int another_num_idx = std::distance(nums.begin(), it);
				if (i != another_num_idx) {
					result.push_back(i);
					result.push_back(another_num_idx);
					break;
				}
			}
		}
		return result;
	}
};
