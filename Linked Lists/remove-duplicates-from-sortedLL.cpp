/*
Given the head of a sorted linked list, delete all duplicates such that 
each element appears only once. Return the linked list sorted as well.

Problem link - https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/
typedef ListNode Node;

class Solution {
public:
    ListNode* deleteDuplicates(Node* head) {
        if(!head)   return head;
        Node* t = head;
        while(t->next) {
            if(t->val == t->next->val) {
                t->next = t->next->next;
            }
            else
                t = t->next;
        }
        return head;
    }
};


/*
Approach:

We start analysis from first node. If its value equals that of the next node then we point our current node to 
the second node in order. This way we delete the equal node. If value is found to be different then we just 
move on to check for next node.

*/