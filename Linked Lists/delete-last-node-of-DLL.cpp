/*
Given a doubly-linked list, delete the node at the end of the doubly linked list.

Definition of doubly linked list:

struct Node {
     int data;
     Node *prev;
     Node *next;
     Node() : data(0), prev(nullptr), next(nullptr) {}
     Node(int val) : data(val), prev(nullptr), next(nullptr) {}
     Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
};


Problem link - https://www.naukri.com/code360/problems/delete-last-node-of-a-doubly-linked-list_8160469
*/

Node * deleteLastNode(Node *head) {
    // Write your code here
    Node *t = head;
    if(t->next==NULL){
        free(t);
        return NULL;
    }
    else{
        while(t->next->next){
        t = t->next;
        }
        free(t->next->next);
        t->next = NULL;
    }
    return head;
}

/*
Approach - 
Traverse till the second last node. Then free the last node using next ptr.
Change the ptr to new last node to NULL.
*/