class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int start = 0;
		int end = numbers.size()-1;
		
		while (end > start) {
			int sum = numbers[start] + numbers[end];
			if (sum > target) {
				end--;
			} else if (sum < target) {
				start++;
			} else {
				break;
			}
		}
		
		return { start+1, end+1 };
	}
};

