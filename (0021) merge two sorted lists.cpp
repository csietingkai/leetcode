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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL && l2 == NULL) {
			return NULL;
		}
		
		vector<int> all = {};
		while (l1 != NULL) {
			all.push_back(l1->val);
			l1 = l1->next;
		}
		while (l2 != NULL) {
			all.push_back(l2->val);
			l2 = l2->next;
		}
		sort(all.begin(), all.end());
		ListNode *head = new ListNode(all[0]);
		ListNode *curr = head;
		for (int i = 1; i < all.size(); i++) {
			curr->next = new ListNode(all[i]);
			curr = curr->next;
		}
		
		return head;
	}
};

