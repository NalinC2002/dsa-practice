/*
Given a sorted doubly linked list of size 'n', consisting of distinct positive integers, and a number 'k'.
Find out all the pairs in the doubly linked list with sum equal to 'k'.

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
         this -> data = data;
         this -> prev = prev;
         this -> next = next;
     }
};
*/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int, int>> ans;
    Node *p , *t;
    p = t = head;

    while(t->next) {
        t = t->next;
    }
    while(p!=t) {
        if(p->data+t->data > k)     t = t->prev;
        else if(p->data+t->data < k)    p = p->next;
        else {
            ans.push_back({p->data, t->data});
            p = p->next;
        }
    }
    return ans;
}

/*
Approach - 

Two pointers - one at head and one at tail.
Traverse head ptr to next and tail ptr to prev according to sum obtained.
Add solution to vector. 
Return vector when both ptrs overlap.
*/