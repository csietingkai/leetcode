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
	int kthSmallest(TreeNode* root, int k) {
		vector<int> converted = {};
		
		traversal(converted, root);
		
		return converted[k-1];
	}
	
	void traversal(vector<int>& converted, TreeNode* node) {
		if (node == NULL) {
			return;
		}
		
		traversal(converted, node->left);
		converted.push_back(node->val);
		traversal(converted, node->right);
	}
};

