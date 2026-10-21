
class Solution {
public:
    ListNode* findkthnode(ListNode* temp, int k) {
        while (temp && k > 1) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reversell(ListNode* tmp, ListNode* kthnode) {
        ListNode* after = kthnode->next;
        ListNode* prev = after;
        ListNode* curr = tmp;

        while (curr != after) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* groupPrev = &dummy;

        while (true) {
            ListNode* kthnode = findkthnode(groupPrev->next, k);

            if (!kthnode) {
                break;
            }

            ListNode* temp = groupPrev->next;
            ListNode* nextgrp = kthnode->next;

            ListNode* newHead = reversell(temp, kthnode);

            groupPrev->next = newHead;
            groupPrev = temp;
        }

        return dummy.next;
    }
};
