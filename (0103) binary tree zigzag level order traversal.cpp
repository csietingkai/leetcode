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
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		vector<vector<int>> result = {};
		if (root == NULL) {
			return result;
		}
		
		queue<TreeNode*> q;
		q.push(root);
		bool is_even_level = true;
		while (!q.empty()) {
			int qsize = q.size();
			vector<int> nodes = {};
			while (qsize--) {
				TreeNode *node = q.front(); 
				if (is_even_level) {
					nodes.push_back(node->val); 
				} else {
					nodes.insert(nodes.begin(), node->val);
				}
				q.pop();
				if (node->left) {
					q.push(node->left);
				}
				if (node->right) {
					q.push(node->right);
				}
			}
			result.push_back(nodes);
			is_even_level = !is_even_level;
		}
		
		return result;
	}
};

