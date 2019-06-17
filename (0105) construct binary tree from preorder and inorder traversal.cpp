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
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int pre_start = 0;
		int pre_end = preorder.size()-1;
		int in_start = 0;
		int in_end = inorder.size()-1;
		return construct(preorder, pre_start, pre_end, inorder, in_start, in_end);
	}
	
	TreeNode* construct(vector<int>& preorder, int pre_start, int pre_end, vector<int>& inorder, int in_start, int in_end) {
		if (pre_start > pre_end || in_start > in_end) {
			return NULL;
		}
		
		TreeNode* node = new TreeNode(preorder[pre_start]);
		
		auto it = find(inorder.begin(), inorder.end(), preorder[pre_start]);
		int node_inorder_idx = distance(inorder.begin(), it);
		
		node->left = construct(preorder, pre_start+1, pre_start+node_inorder_idx-in_start, inorder, in_start, node_inorder_idx-1);
		node->right = construct(preorder, pre_start+node_inorder_idx-in_start+1, pre_end, inorder, node_inorder_idx+1, in_end);
		
		return node;
	}
};

