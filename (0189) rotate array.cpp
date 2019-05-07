class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (nums.size() < k) {
			k %= nums.size();
		}
		nums.insert(nums.begin(), nums.end()-k, nums.end());
		nums.erase(nums.end()-k, nums.end());
	}
};

