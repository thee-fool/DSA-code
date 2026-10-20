class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* nw = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sm = carry;

            if (l1) {
                sm += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sm += l2->val;
                l2 = l2->next;
            }

            carry = sm / 10;

            nw->next = new ListNode(sm % 10);
            nw = nw->next;
        }

        return dummy.next;
    }
};