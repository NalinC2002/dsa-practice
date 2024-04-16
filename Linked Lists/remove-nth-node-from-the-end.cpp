/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz


Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
*/
typedef ListNode Node;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        Node *t, *p, *pprev;
        t = p = head;

        while(n-->0) {
            t = t->next;
        }

        while(t) {
            pprev = p;
            p = p->next;
            t = t->next;
        }

        if(p!=head) 
            pprev->next = p->next;
        else
           head = p->next;
    
        return head;
    }
};

/*
Approach - 

Move the t ptr to the nth node from head. Now move p ptr pointing to head and t together till t is not NULL.
Now p points to required node.
pprev points to the node whose ptr needs to be changed.
Return head after changes are done.
*/