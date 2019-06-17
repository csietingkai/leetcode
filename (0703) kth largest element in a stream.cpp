class KthLargest {
public:
	KthLargest(int k, vector<int>& nums)
		: k(k)
		, q(nums.begin(), nums.end()) 
	{
		while (this->q.size() > this->k) {
			q.pop();
		}
	}
	
	int add(int val) {
		if (this->q.empty() || this->q.size() < k) {
			this->q.push(val);
		} else {
			int top = this->q.top();
			if (val > top) {
				this->q.pop();
				this->q.push(val);
			}
		}
		return this->q.top();
	}
private:
	const int k;
	std::priority_queue<int, std::vector<int>, std::greater<int>> q;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
