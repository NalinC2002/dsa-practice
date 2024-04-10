/*
Given a doubly-linked list and a value ‘k’, 
insert a node having value ‘k’ at the end of the doubly linked list.

Definition of doubly linked list:

struct Node {
     int value;
     Node *prev;
     Node *next;
     Node() : value(0), prev(nullptr), next(nullptr) {}
     Node(int val) : value(val), prev(nullptr), next(nullptr) {}
     Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
};


Problem link - https://www.naukri.com/code360/problems/insert-at-end-of-doubly-linked-list_8160464
*/

Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node *n = new Node(k);
    if(head==NULL)
        return n;
    else{
        Node *t = head;
        while(t->next)
            t = t->next;
        t->next = n;
        n->prev = t;    
    }    
    return head;
    
}

/*
Approach - 
Traverse the list till last node. Insert at last node using constructor.
*/