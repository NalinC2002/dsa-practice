/*
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
k is a positive integer and is less than or equal to the length of the linked list. 
If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/reverse-nodes-in-k-group/description/
*/

typedef ListNode Node; 

class Solution {
public:
    Node *reverseList(Node *head) {
        Node *p, *q, *r;
        if(!head or !head->next)    return head;
        p = head;
        q = NULL;
        while(p) {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }

    Node* reverseKGroup(Node* head, int k) {
        if(k==1 or !head or !head->next)    return head;
        Node *p, *q, *last;
        int t = k-1;
        p = head;
        while(t and p->next) {
            p = p->next;
            t--;
        }
        if(t)   return head;
        q = p->next;
        q = reverseKGroup(q, k);
        p->next = NULL;
        last = head;
        head = reverseList(head);
        last->next = q;

        return head;
    }
};

/*
Approach - 
First go to the last ptr of each sublist of length k. Recursively call the function for the next k parts from here.
Make the last ptr point to null. Then before we reverse this k length list, store the head address into node *last.
After reversing the sublist, the previous head becomes the last node of it that we stored into the last ptr.
Make this last ptr to point to the result of the recursive call. 
The reverselist function iteratively reverses the list for us.
We do not reverse if the sublist is of length less than k. 
*/