class Solution {
public:
	int heightChecker(vector<int>& heights) {
		vector<int> height_count(101, 0);
		
		for (int height : heights) {
			height_count[height]++;
		}
		
		int result = 0;
		int curHeight = 0;
		
		for (int i = 0; i < heights.size(); i++) {
			while (height_count[curHeight] == 0) {
				curHeight++;
			}
			
			if (curHeight != heights[i]) {
				result++;
			}
			height_count[curHeight]--;
		}
		
		return result;
	}
};

