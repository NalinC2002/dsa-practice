/*
Given the head of a linked list ‘list’ of size ‘N’,
delete the linked list's last node and return the linked list's head.

Problem link - https://leetcode.com/problems/delete-node-in-a-linked-list/description/

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
*/


void deleteNode(ListNode* node) {
    ListNode *p, *q;
    p = node;
    while(p->next->next){
        p->val = p->next->val;
        p = p->next;
    }
    p->val = p->next->val;
    p->next = NULL;
}