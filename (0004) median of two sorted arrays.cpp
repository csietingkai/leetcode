class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		nums1.insert(nums1.end(), nums2.begin(), nums2.end());
		sort(nums1.begin(), nums1.end());
		int mid_idx = nums1.size()/2;
		double result = nums1[mid_idx];
		if (nums1.size()%2 == 0) {
			result = ((double)(nums1[mid_idx] + nums1[mid_idx-1]))/2;
		}
		return result;
	}
};

