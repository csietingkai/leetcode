class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> num_set(nums.begin(), nums.end());
		return nums.size() != num_set.size();
	}
};

