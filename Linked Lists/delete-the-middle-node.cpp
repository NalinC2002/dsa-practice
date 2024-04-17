/*
Given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, 
where ⌊x⌋ denotes the largest integer less than or equal to x.
For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
*/
typedef ListNode Node;

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        Node *fs, *prev;
        if(!head or !head->next)    
            return NULL;
        fs = head->next->next;   
        prev = head; 

        while(fs and fs->next) {
            prev = prev->next;
            fs = fs->next->next;
        }

        prev->next = prev->next->next;

        return head;
    }
};

/*
Approach - 

Two pointers - fast and slow.
Slow ptr is to point at node before the deleting node.
Head can never be changed if list length is more than 1.
*/