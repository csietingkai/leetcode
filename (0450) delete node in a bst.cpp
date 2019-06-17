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
	TreeNode* deleteNode(TreeNode* root, int key) {
		if (root != NULL) {
			if (root->val == key) {
				if (root->left == NULL) {
					root = root->right;
					return root;
				} else if (root->right == NULL) {
					root = root->left;
					return root;
				} else {
					TreeNode *min_node = this->min(root->right);
					root->val = min_node->val;
					root->right = deleteNode(root->right, min_node->val);
				}
			} else if (root->val > key) {
				root->left = deleteNode(root->left, key);
			} else if (root->val < key) {
				root->right = deleteNode(root->right, key);
			}
		}
		return root;
	}
	
	TreeNode* min(TreeNode* node) {
		TreeNode* current = node;
		while (current && current->left) {
			current = current->left;
		}
		return current;
	}
};

