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
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL) {
			return head;
		}
		
		ListNode *current = head;
		ListNode *even = head->next;
		ListNode *even_head = even;
		
		while (even != NULL && even->next != NULL) {
			current->next = even->next;
			current = current->next;
			even->next = current->next;
			even = even->next;
		}
		current->next = even_head;
		return head;
	}
};

