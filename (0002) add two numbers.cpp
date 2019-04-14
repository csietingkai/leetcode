class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* dummy = new ListNode(0);
		ListNode* current = dummy;
		int carry = 0;
		while (l1 || l2 || carry) {
			int value = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
			carry = value / 10;
			value = value % 10;
			current->next = new ListNode(value);
			current = current->next;
			if (l1) {
				l1 = l1->next;
			}
			if (l2) {
				l2 = l2->next;
			}
		}
		
		return dummy->next;
	}
};
