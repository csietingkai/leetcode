class Solution {
public:
	int singleNumber(vector<int>& nums) {
		set<int> num_set(nums.begin(), nums.end());
		int vector_sum = accumulate(nums.begin(), nums.end(), 0);
		int set_sum = accumulate(num_set.begin(), num_set.end(), 0);
		return set_sum*2-vector_sum;
	}
};

