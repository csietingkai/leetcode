class Solution {
public:
	vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
		vector<vector<int>> result = {};
		
		if (nums1.empty() || nums2.empty() || k <= 0) {
			return result;
		}
		
		vector<int> idxs(nums1.size(), 0);
		while (k--) {
			int min_val = INT_MAX;
			int in = -1;
			for (int i = 0; i < nums1.size(); i++) {
				if (idxs[i] >= nums2.size()) {
					continue;
				}
				if (nums1[i] + nums2[idxs[i]] < min_val) {
					min_val = nums1[i] + nums2[idxs[i]];
					in = i;
				}
			}
			if (in == -1) {
				break;
			}
			result.push_back({nums1[in], nums2[idxs[in]]});
			idxs[in]++;
		}
		
		return result;
	}
};

