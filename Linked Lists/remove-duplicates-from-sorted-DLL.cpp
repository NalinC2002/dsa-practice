/*
Given a sorted doubly linked list of size 'n'.
Remove all the duplicate nodes present in the linked list.


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

Problem link - https://www.naukri.com/code360/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283
*/

Node * removeDuplicates(Node *head) {
    if(!head->next)    return head;

    Node *p = head;
    Node *t;

    while(p and p->next) {
        if(p->data==p->next->data) {
            t = p->next;
            while(t and t->data == p->data)
                t = t->next;
            if(t) {
                p->next = t;
                t->prev = p;
                p = p->next;
            } 
            else
                p->next = NULL;
        } 
        else
            p = p->next;
    }
    return head;
}

/*
Approach - 
Maintain 2 ptrs. p traverses the list and t traverses the nodes with same values as p.
When t lands over a new value, we make p  point to t and t->prev to p.
Return head when p is at last node.
*/