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
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(result, root);
		return result;
	}
	
	void traversal(vector<int>& result, TreeNode* node) {
		if (node == NULL) {
			return;
		}
		
		traversal(result, node->left);
		result.push_back(node->val);
		traversal(result, node->right);
	}
};

