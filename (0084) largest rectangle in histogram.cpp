class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max = 0;
        for (int i = 0; i < heights.size(); i++) {
            int min_height = heights[i];
            for (int j = i; j < heights.size(); j++) {
                if (min_height > heights[j]) {
                    min_height = heights[j];
                }
                int rect_value = min_height * (j - i + 1);
                if (rect_value > max) {
                    max = rect_value;
                }
            }
        }
        return max;
    }
};
