/*
Given a doubly-linked list of size 'N', consisting of positive integers. 
Reverse it and return the head of the modified list.


Structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Problem link - https://www.naukri.com/code360/problems/reverse-a-doubly-linked-list_1116098
*/

Node* reverseDLL(Node* head) {
    Node *p, *q, *r;
    p = head;
    q = NULL;
    if(!p or !p->next)  return head;
    while(p) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
        q->prev = p;
    }
    return q;
} 


/*
Approach - 

*/