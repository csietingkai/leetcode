class Solution {
public:
	vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
		vector<int> result;
		int j = tomatoSlices / 2 - cheeseSlices;
		int c = 2 * cheeseSlices - tomatoSlices / 2;
		
		if (tomatoSlices == 0 && cheeseSlices == 0) {
			result.push_back(0);
			result.push_back(0);
		} else if (4 * j + 2 * c == tomatoSlices && j + c == cheeseSlices && j >= 0 && c >= 0) {
			result.push_back(j);
			result.push_back(c);
		}
		return result;
	}
};

