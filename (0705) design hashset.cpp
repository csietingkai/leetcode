class MyHashSet {
	vector<int> values;
public:
	/** Initialize your data structure here. */
	MyHashSet() {
		values.resize(100001, -1);
	}
	
	void add(int key) {
		values[key] = key;
	}
	
	void remove(int key) {
		values[key] = -1;;
	}
	
	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		return values[key] == key;
	}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

