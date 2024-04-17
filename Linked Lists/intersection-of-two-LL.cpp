/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.The test cases are generated such that there are no cycles anywhere in the entire linked structure.

Note that the linked lists must retain their original structure after the function returns.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
*/

typedef ListNode Node; 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        Node *a, *b;
        a = headA;
        b = headB;

        while(a!=b) {
            a = (a)?a->next:headB;
            b = (b)?b->next:headA;
        }
        return a;
    }
};

/*
Approach - 
Two pointers to point at both heads.
Make them traverse one node at a time. If they encounter NULL, 
make them go to head of other list. 
This way both of them will be same a time - either null or a node.
*/