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
	TreeNode* insertIntoBST(TreeNode* root, int val) {
		find_position(root, val);
		return root;
	}
	
	void find_position(TreeNode*& node, int val) {
		if (node != NULL) {
			if (node->val == val) {
				return;
			} else if (node->val > val) {
				find_position(node->left, val);
			} else if (node->val < val) {
				find_position(node->right, val);
			}
		} else {
			node = new TreeNode(val);
		}
	}
};

