class Solution {
public:
	map<char, char> brackets;
	
	Solution() {
		this->brackets.insert(pair<char,char>(')', '('));
		this->brackets.insert(pair<char,char>(']', '['));
		this->brackets.insert(pair<char,char>('}', '{'));
	}
	
	bool isValid(string s) {
		stack<char> m_stack;
		for (int i = 0; i < s.length(); i++) {
			char c = s.at(i);
			map<char,char>::iterator it = this->brackets.find(c);
			if (it != this->brackets.end()) {
				char top_element = m_stack.empty() ? '#' : m_stack.top();
				if (top_element != it->second) {
					return false;
				} else {
					m_stack.pop();
				}
			} else {
				m_stack.push(c);
			}
		}
		return m_stack.empty();
	}
};
