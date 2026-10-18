/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 0; 
        ListNode* curr = head;
        while(curr){
            l++;
            curr=curr->next;
        }
        int c=0 ; 
        ListNode* cur = head;
        while (cur){
            if(l-n == 0 ){
                head = head->next;
                break;
            }
            if ( c == l-n-1){
                cur->next=cur->next->next;
            }
            c++;
            cur=cur->next;
        }
        return head;

        
};
};