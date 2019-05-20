class Solution {
public:
	bool increasingTriplet(vector<int>& nums) {
		int record[2] = { INT_MAX, INT_MAX };
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] > record[1]) {
				return true;
			} else if (nums[i] > record[0]) {
				record[1] = nums[i];
			} else {
				record[0] = nums[i];
			}
		}
		return false;
	}
};
