class Solution {
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
		if (nums.size() < 2 || k <= 0 || t < 0) {
			return false;
		}
		
		set<long> record;
		for (int i = 0; i < nums.size(); i++) {
			if (i > k) {
				record.erase(nums[i-k-1]);
			}
			
			set<long>::iterator lower = record.lower_bound(((long)nums[i]) - ((long)t));
			if (lower != record.end() && abs(((long)nums[i]) - *lower) <= t) {
				return true;
			}
			
			record.insert((long)nums[i]);
		}
		return false;
	}
};

