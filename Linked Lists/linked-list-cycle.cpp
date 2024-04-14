/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list 
that can be reached again by continuously following the next pointer. 
Return true if there is a cycle in the linked list. Otherwise, return false.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

Problem link - https://leetcode.com/problems/linked-list-cycle/
*/
typedef ListNode Node;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head or !head->next)   return false;
        Node *sl, *fs;
        sl = fs = head;
        
        do {
            sl = sl->next;
            fs = fs->next->next;
        }while(fs and fs->next and sl!=fs);
        
        if(!fs or !fs->next) 
            return false;
        return true;    
    }
};

/*
Approach - 
Two pointer approach. Put sl and fs ptr to point to head. If they ever meet during traversing, then cycle.
If fs hits NULL then no cycle.
*/