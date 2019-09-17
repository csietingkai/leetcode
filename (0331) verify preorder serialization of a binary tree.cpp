class Solution {
public:
	bool isValidSerialization(string preorder) {
		vector<string> tokens = split(preorder, ',');
		
		stack<string> sck;
		
		for (string token : tokens) {
			if (sck.empty() || token.compare("#") != 0) {
				sck.push(token);
			} else {
				while (!sck.empty() && sck.top().compare("#") == 0) {
					sck.pop();
					if (sck.empty()) {
						return false;
					} else {
						sck.pop();
					}
				}
				sck.push("#");
			}
		}
		return sck.size() == 1 && sck.top().compare("#") == 0;
	}
private:
	vector<string> split (const string &s, char delim) {
		vector<string> result;
		stringstream ss (s);
		string item;

		while (getline (ss, item, delim)) {
			result.push_back (item);
		}

		return result;
	}
};

