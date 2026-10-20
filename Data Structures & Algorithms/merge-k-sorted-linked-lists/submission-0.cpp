
class Solution {
public:
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        // Step 1: Insert the first node of each non-empty list
        for (ListNode* node : lists) {
            if (node != nullptr) {
                pq.push(node);
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        // Step 2: Repeatedly extract the smallest node
        while (!pq.empty()) {
            ListNode* curr = pq.top();
            pq.pop();

            tail->next = curr;
            tail = curr;

            // Add the next node from the same list
            if (curr->next != nullptr) {
                pq.push(curr->next);
            }
        }

        tail->next = nullptr;
        return dummy.next;
    }
};
