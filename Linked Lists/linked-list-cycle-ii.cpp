/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.
Do not modify the linked list.


Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

Problem link - https://leetcode.com/problems/linked-list-cycle-ii/description/
*/
typedef ListNode Node;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        Node *p, *sl, *fs;
        p = sl = fs = head;
        if(!head or !head->next)
            return NULL;
        do {
            sl = sl->next;
            fs = fs->next->next;
        }while(sl!=fs and fs!=NULL and fs->next!=NULL);

        if(fs==NULL or fs->next==NULL)    
            return NULL;

        while(p!=sl) {
            p = p->next;
            sl = sl->next;
        }
        return p;      
    }
};