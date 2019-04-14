class Solution {
public:
	bool search(vector<int>& nums, int target) {
		std::vector<int>::iterator it = std::find(nums.begin(), nums.end(), target);
		return it != nums.end();
	}
};
