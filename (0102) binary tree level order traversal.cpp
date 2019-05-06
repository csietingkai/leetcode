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
	void traversal(vector<vector<int>>& result, TreeNode* root, int level) {
		if (result.size()-1 >= level) {
			result[level].push_back(root->val);
		} else {
			vector<int> list = { root->val };
			result.push_back(list);
		}
		
		if (root->left != NULL) {
			traversal(result, root->left, level+1);
		}
		
		if (root->right != NULL) {
			traversal(result, root->right, level+1);
		}
		
		if (root->left == NULL && root->right == NULL) {
			return;
		}
	}
	
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> result = {{}};
		if (root == NULL) {
			return {};
		}
		traversal(result, root, 0);
		return result;
	}
};
