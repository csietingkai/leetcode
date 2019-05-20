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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(result, root);
		return result;
	}
	
	void traversal(vector<int>& result, TreeNode* node) {
		if (node == NULL) {
			return;
		}
		
		result.push_back(node->val);
		traversal(result, node->left);
		traversal(result, node->right);
	}
};

