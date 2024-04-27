/*
Given the head of a linked list, rotate the list to the right by k places.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/rotate-list/description/
*/
typedef ListNode Node;

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next)    return head;
        Node *t, *p, *q;
        t = head;
        int count=0;
        while(t) {
            t = t->next;
            count++;
        }
        //cout<<count<<endl;
        k = k%count;
        if(k==0)    return head;
        k++;
        t = head;
        while(k) {
            t = t->next;
            k--;
        }
        p = head;
        while(t) {
            p = p->next;
            t = t->next;
        }
        t = p->next;    //t will be new head 
        p->next = NULL;
        q = t;
        while(q->next) {
            q = q->next;
        }
        q->next = head;
        return t;
    }
};

/*
Approach - 
Reduce k to less than length of list first. Then use two pts t and p 
to reach the two nodes whose addresses are to be modified - the new tail 
and its next node that becomes new head. Then traverse to the last node and 
make it point to old head and return the new head.
*/