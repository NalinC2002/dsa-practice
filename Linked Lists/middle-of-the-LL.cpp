/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/middle-of-the-linked-list/
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode *a, *b;
    a = b = head;
    while(b!=NULL and b->next!=NULL) {
        a = a->next;
        b = b->next->next;
    }
    return a;
    }
};

/*
Approach - 
Tortoise Hare method
Two pointers - slow and fast. Slow moves one step at a time and fast moves 2.
Move both together till fast is not null and fast's next is not null.
Now return slow.
*/