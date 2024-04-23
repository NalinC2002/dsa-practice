/*
Given a doubly-linked list and a key 'k'.
Delete all the nodes having data equal to ‘k’.

Definition of doubly linked list:

class Node {
public:
    int data;
    Node *prev;
    Node *next;
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node (int data, Node *next, Node *prev) {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Problem link - https://www.naukri.com/code360/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461
*/

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node *p = head;
    while(p) {
        if(p->data==k) {
            if(p==head) {
                p = p->next;
                if(p)
                        p->prev = NULL;
                head = p;        
            }
            else {
                p->prev->next = p->next;
                if(p->next)
                    p->next->prev = p->prev;
                p = p->next;    
            }
        }
        else p = p->next;
    }
    return head;
}

/*
Approach - 

Traverse the LL. If k found, change the ptrs of prev and next node according to presence of tail
and also take care when deleting head.
*/