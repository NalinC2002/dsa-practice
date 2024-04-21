/*
Given the head of a linked list, return the list after sorting it in ascending order.

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/sort-list/
*/
typedef ListNode Node;

class Solution {
public:
    Node *mergeList(Node *l1, Node *l2) {
        
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val < l2->val) {
            l1->next = mergeList(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeList(l1, l2->next);
            return l2;
        }       
    }

    Node* sortList(Node *head) {
        if(!head or !head->next)
            return head;
        Node *sl, *fs, *prev;
        sl = fs = head;

        while(fs and fs->next) {
            prev = sl;
            sl = sl->next;
            fs = fs->next->next;
        }    
        prev->next = NULL;
        
        Node *h1 = sortList(head);
        Node *h2 = sortList(sl);  
        return mergeList(h1, h2); 
    }
};


/*
Approach - 
Use mergesort algo. Split the list into two halfs, sort them and merge them recursively.
MergeList is also recursive.
*/