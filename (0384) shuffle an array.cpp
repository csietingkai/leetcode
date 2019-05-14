class Solution {
	vector<int> nums;
	vector<int> ori_nums;
public:
	Solution(vector<int>& nums) {
		this->nums = nums;
		this->ori_nums = nums;
	}
	
	/** Resets the array to its original configuration and return it. */
	vector<int> reset() {
		return this->ori_nums;
	}
	
	/** Returns a random shuffling of the array. */
	vector<int> shuffle() {
		random_shuffle(this->nums.begin(), this->nums.end());
		return this->nums;
	}
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

