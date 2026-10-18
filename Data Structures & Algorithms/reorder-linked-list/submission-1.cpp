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
    void reorderList(ListNode* head) {
        ListNode* curr = head ;
        vector <ListNode*> a;
        while ( curr != nullptr ){
            a.push_back(curr);
            curr=curr->next;
        }
        int i = 0 ;
        int j = a.size() - 1;
        while ( i<j){
            a[i]->next=a[j];
            i++;
            if(i>=j) break;
            a[j]->next=a[i];
            j--;          
        }
        a[i]->next = nullptr;
        
    }
};
