
#include <unordered_map>
using namespace std;

class LRUCache {
public:
    struct Node {
        int key, val;
        Node* next;
        Node* prv;

        Node(int key, int val) {
            this->key = key;
            this->val = val;
            next = nullptr;
            prv = nullptr;
        }
    };

    Node* head;
    Node* tail;

    unordered_map<int, Node*> lru;
    int n = 0;

    LRUCache(int capacity) {
        n = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prv = head;
    }

    void addin(Node* a) {
        a->next = head->next;
        a->prv = head;
        head->next->prv = a;
        head->next = a;
    }

    void remove(Node* a) {
        a->prv->next = a->next;
        a->next->prv = a->prv;
    }

    int get(int key) {
        if (!lru.count(key)) {
            return -1;
        }

        Node* a = lru[key];
        remove(a);
        addin(a);

        return a->val;
    }

    void put(int key, int value) {
        // If key already exists, update it
        if (lru.count(key)) {
            Node* a = lru[key];
            a->val = value;

            remove(a);
            addin(a);
            return;
        }

        // Evict LRU node if cache is full
        if (lru.size() == n) {
            Node* a = tail->prv;
            remove(a);
            lru.erase(a->key);
            delete a;
        }

        // Insert new node
        Node* a = new Node(key, value);
        lru[key] = a;
        addin(a);
    }
};
