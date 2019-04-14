class MagicDictionary {
public:
	set<string> words;
	set<string> word_patterns;
	/** Initialize your data structure here. */
	MagicDictionary() {
		this->words.clear();
		this->word_patterns.clear();
	}
	
	/** Build a dictionary through a list of words */
	void buildDict(vector<string> dict) {
		for (int i = 0; i < dict.size(); i++) {
			this->words.insert(dict[i]);
			for (int j = 0; j < dict[i].length(); j++) {
				string word = dict[i];
				string ch = word.substr(j, 1);
				word = word.replace(j, 1, "[^"+ch+"]");
				this->word_patterns.insert(word);
			}
		}
	}
	
	/** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
	bool search(string word) {
		for (set<string>::iterator it = this->word_patterns.begin(); it != this->word_patterns.end(); ++it) {
			regex reg(*it);
			if (regex_match(word, reg)) {
				return true;
			}
		}
		return false;
	}
};
