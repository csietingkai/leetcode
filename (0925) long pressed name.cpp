class Solution {
public:
	string no_duplicate_str(const string& str) {
		string ret = "";
		ret += str.at(0);
		for (int i = 1; i < str.length(); i++) {
			if (str.at(i) != ret.at(ret.length()-1)) {
				ret += str.at(i);
			}
		}
		//cout << ret << endl;
		return ret;
	}
	
	vector<int> count_alpha(const string& str) {
		vector<int> ret = {0};
		int vec_idx = 0;
		char current = str.at(0);
		for (int i = 0; i < str.length(); i++) {
			char ch = str.at(i);
			if (ch == current) {
				ret[vec_idx]++;
			} else {
				current = ch;
				vec_idx++;
				ret.push_back(1);
			}
		}
		return ret;
	}
	
	bool isLongPressedName(string name, string typed) {
		string no_duplicate_name = no_duplicate_str(name);
		string no_duplicate_typed = no_duplicate_str(typed);
		if (no_duplicate_name.compare(no_duplicate_typed) != 0) {
			return false;
		}
		
		vector<int> name_record = count_alpha(name);
		vector<int> typed_record = count_alpha(typed);
		
		for (int i = 0; i < name_record.size(); i++) {
			cout << typed_record[i] << " " << name_record[i] << endl;
			if (typed_record[i] < name_record[i]) {
				return false;
			}
		}
		return true;
	}
};

