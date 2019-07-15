class Solution {
public:
	int min(int a, int b) {
		return a < b ? a : b;
	}
	
	int minimumTotal(vector<vector<int>>& triangle) {
		int n = triangle.size();
		vector<int> buf(n,0);
		int res = 0;
		for(int i = n-1;  i > 0; i--) {
			for(int j = 0; j < i; j++) {
				buf[j] = min(triangle[i][j], triangle[i][j+1]);   
			}
			
			for(int j = 0; j < i; j++) {
				triangle[i-1][j] += buf[j];
			}
		}
		
		return triangle[0][0];
	}
};
