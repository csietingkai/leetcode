class Solution {
public:
	string bin2str(unsigned int num) {
		char result[(sizeof(unsigned int))*8+1];
		unsigned int index = sizeof(unsigned int)*8;
		result[index] = '\0';
		do result[ --index ] = '0' + (num & 1);
		while (num >>= 1);
		return string( result + index );
	}
	
	bool queryString(string S, int N) {
		for (int i = 1; i <= N; i++) {
			string target = bin2str(i);
			if (S.find(target) == std::string::npos) {
				return false;
			}
		}
		return true;
	}
};
