/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> orig_copy;
        orig_copy[NULL]=NULL;

        Node* curr = head;
        while(curr){
            Node* copy=new Node(curr->val);
            orig_copy[curr]=copy;
            curr=curr->next;
        }
        
        curr = head;
        while (curr){
            Node* copy = orig_copy[curr];
            copy->next = orig_copy[curr->next];
            copy->random = orig_copy[curr->random];
            curr=curr->next;
        }

        return orig_copy[head];
        

        
        
    }
};
