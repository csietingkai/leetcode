class Solution {
public:
	bool carPooling(vector<vector<int>>& trips, int capacity) {
		int record[1001] = {0};
		int farest = -1;
		for (int i = 0; i < trips.size(); i++) {
			if (trips[i][0] > capacity) {
				return false;
			}
			for (int j = trips[i][1]; j < trips[i][2]; j++) {
				record[j] += trips[i][0];
			}
			if (farest < trips[i][2]) {
				farest = trips[i][2];
			}
		}
		
		for (int i = 0; i < farest; i++) {
			if (record[i] > capacity) {
				return false;
			}
		}
		return true;
	}
};

