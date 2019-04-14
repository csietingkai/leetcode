class Solution {
public:
	int search(vector<int>& nums, int target) {
		std::vector<int>::iterator it = std::find(nums.begin(), nums.end(), target);
		return it != nums.end() ? std::distance(nums.begin(), it) : -1;
	}
};
