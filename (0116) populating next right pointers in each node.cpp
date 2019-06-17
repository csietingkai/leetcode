/*
// Definition for a Node.
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node* next;

	Node() {}

	Node(int _val, Node* _left, Node* _right, Node* _next) {
		val = _val;
		left = _left;
		right = _right;
		next = _next;
	}
};
*/
class Solution {
public:
	Node* connect(Node* root) {
		level_order(root);
		return root;
	}
	
	void level_order(Node *root) {
		if (root == NULL) {
			return;
		}
		queue<Node*> q;
		q.push(root);
		
		while (!q.empty()) {
			int qsize = q.size();
			vector<Node*> nodes = {};
			while (qsize--) {
				Node *node = q.front(); 
				nodes.push_back(node);
				q.pop();
				if (node->left) {
					q.push(node->left);
				}
				if (node->right) {
					q.push(node->right);
				}
			}
			for (int i = 0; i < nodes.size()-1; i++) {
				nodes[i]->next = nodes[i+1];
			}
		}
	}
};

