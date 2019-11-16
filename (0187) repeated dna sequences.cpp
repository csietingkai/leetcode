class Solution {
public:
	vector<string> findRepeatedDnaSequences(string s) {
		if (s.length() <= 10) {
			return {};
		}
		set<string> record;
		set<string> result = {};
		
		for (int i = 0; i < 10; i++) {
			string str = s.substr(i, s.length());
			while (str.length() >= 10) {
				string token = str.substr(0, 10);
				str = str.substr(10, str.length());
				if (record.find(token) != record.end()) {
					result.insert(token);
				} else {
					record.insert(token);
				}
			}
		}
		
		return vector(result.begin(), result.end());
	}
};

