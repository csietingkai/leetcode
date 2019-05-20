class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		map<string, vector<string>> result;
		for (int i = 0; i < strs.size(); i++) {
			string key = strs[i];
			sort(key.begin(), key.end());
			map<string, vector<string>>::iterator it = result.find(key);
			if (it != result.end()) {
				it->second.push_back(strs[i]);
			} else {
				result.insert(pair<string, vector<string>>(key, {strs[i]}));
			}
		}
		vector<vector<string>> vecs = {};
		for (map<string, vector<string>>::iterator it = result.begin(); it != result.end(); it++) {
			vecs.push_back(it->second);
		}
		
		return vecs;
	}
};

