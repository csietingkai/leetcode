/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
		unordered_set<ListNode*> nodes;
		while (head != NULL) {
			if (nodes.find(head) != nodes.end()) {
				return true;
			} else {
				nodes.insert(head);
			}
			head = head->next;
		}
		return false;
	}
};
