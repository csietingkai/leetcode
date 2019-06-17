/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
	BSTIterator(TreeNode* root) {
		this->current_idx = -1;
		this->indorder_traversal(root);
	}
	
	/** @return the next smallest number */
	int next() {
		this->current_idx++;
		return this->record[this->current_idx];
	}
	
	/** @return whether we have a next smallest number */
	bool hasNext() {
		return ((this->current_idx+1) < this->record.size());
	}
	
private:
	vector<int> record;
	int current_idx;
	
	void indorder_traversal(TreeNode* node) {
		if (node == NULL) {
			return;
		}
		
		indorder_traversal(node->left);
		this->record.push_back(node->val);
		indorder_traversal(node->right);
	}
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

