/*
Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. 
You need to sort the linked list in non-decreasing order and the return the head of the sorted list.

Structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Problem link - https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937
*/
void addNode(Node *p, Node **h, Node **t) {
    if((*h)!=NULL) {
        (*t)->next = p;
        *t = p;
    }
    else 
        *h = *t = p;
}

Node* sortList(Node *head){
    // Write your code here.
    Node *h0, *h1, *h2, *t0, *t1, *t2;
    h0=h1=h2=t0=t1=t2=NULL;

    Node *p, *t = head;
    while(t) {
        p = t;
        t = t->next;
        p->next = NULL;
        if(p->data==0) 
            addNode(p, &h0, &t0);
        else if(p->data==1) 
            addNode(p, &h1, &t1);
        else
            addNode(p, &h2, &t2);    
    }

    if(h0) {
        t0->next = h1 ? h1 : h2;
        if(h1)
            t1->next = h2;
        return h0;
    }
    else {
        if (h1) {
            t1->next = h2;
            return h1;
        }
    }
    return h2;
}

/*
Approach - 
Make 3 independent lists of 0s, 1s, 2s - each has head and tail ptr.
Traverse the list and add each element to correct list.
Then join these lists correctly.
Return head of final list.   
*/