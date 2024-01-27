/*
Given the node to be deleted, you will not be given access to the first node of head.
All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.
Delete the given node. Note that by deleting the node, we do not mean removing it from memory:-
1. The value of the given node should not exist in the linked list.
2. The number of nodes in the linked list should decrease by one.

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

/*
Approach:

Since we are not given address of head node,  we will copy next node's data into current node
with each iteration until we reach last node.
Then delete the last node.
This way we have ommitted data of the node to be deleted.
*/