class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> result;
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(result));
		set<int> result_set(result.begin(), result.end());
		vector<int>::iterator it = unique(result.begin(), result.end());
		result.resize(distance(result.begin(), it));
		return result;
	}
};

