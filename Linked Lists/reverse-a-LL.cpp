/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem Link - https://leetcode.com/problems/reverse-linked-list/description/
*/

typedef ListNode Node; 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        Node *p, *q, *r;
        p = head; q = NULL;

        while(p) {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }

        return q;
    }
};

/*
Approach - 
Use three pointer approach. Point p to head then q and r to NULL.
At each step until p points to NULL, point q to p and p to next.
Make q point to r each time.
Return q at last as head.
*/