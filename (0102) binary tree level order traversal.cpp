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
	vector<vector<int>> result = {};
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		if (root == NULL) {
			return result;
		}
		queue<TreeNode*> q;
		q.push(root);
		
		while (!q.empty()) {
			int qsize = q.size();
			vector<int> nodes = {};
			while (qsize--) {
				TreeNode *node = q.front(); 
				nodes.push_back(node->val);
				q.pop();
				if (node->left) {
					q.push(node->left);
				}
				if (node->right) {
					q.push(node->right);
				}
			}
			result.push_back(nodes);
		}
		
		return result;
	}
};

