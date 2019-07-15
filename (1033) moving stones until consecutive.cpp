class Solution {
public:
	vector<int> numMovesStones(int a, int b, int c) {
		vector<int> input = {a, b, c};
		sort(input.begin(), input.end());
		a = input[0];
		b = input[1];
		c = input[2];
		
		vector<int> result = {};
		int min = 0;
		if (b-a==2 || c-b==2) {
			min++;
		} else {
			if (b-a > 2) {
				min++;
			} 
			if (c-b > 2) {
				min++;
			}
		}
		result.push_back(min);
		result.push_back(c-a-2);
		return result;
	}
};
