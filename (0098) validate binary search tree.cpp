/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	vector<int> values;
public:
	bool isValidBST(TreeNode* root) {
		preorder(root);
		set<int> value_set(values.begin(), values.end());
		return value_set.size() == values.size() && is_sorted(values.begin(), values.end());
	}
	
	void preorder(TreeNode* node) {
		if (node == NULL) {
			return;
		}
		preorder(node->left);
		values.push_back(node->val);
		preorder(node->right);
	}
};

