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
	int maxAncestorDiff(TreeNode* root) {
		return traversal(root, INT_MIN, INT_MAX);
	}
	
	int traversal(TreeNode* node, int max_val, int min_val) {
		if (node == NULL) {
			return 0;
		}
		
		min_val = min(node->val, min_val);
		max_val = max(node->val, max_val);
		
		if (node->right == NULL && node->left == NULL) {
			return max_val - min_val;
		}
		
		return max(traversal(node->left, max_val, min_val), traversal(node->right, max_val, min_val));
	}
};
