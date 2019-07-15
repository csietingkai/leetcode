class Solution {
public:
	vector<int> sortArray(vector<int>& nums) {
		multiset<int> numset(nums.begin(), nums.end());
		return vector<int>(numset.begin(), numset.end());
	}
};
