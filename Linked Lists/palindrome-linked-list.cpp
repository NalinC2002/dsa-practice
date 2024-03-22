/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Problem link - https://leetcode.com/problems/palindrome-linked-list/description

Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

*/ 

Node* reverseList(Node *head) {
    if(!head->next) return head;
    Node *p, *q, *r;
    p = head;
    q = NULL;
    while(p) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}

bool isPalindrome(Node *head)
{
    
    Node *sl, *fs;
    sl = fs = head;
    if(!head->next) return true;

    while(fs->next and fs->next->next) {
        sl = sl->next;
        fs = fs->next->next;
    }

    sl->next = reverseList(sl->next);
    sl = sl->next;
    
    fs = head;
    while(sl) {
        if(fs->val!=sl->val)
            return false;
        fs = fs->next;
        sl = sl->next;    
    }

    return true;
}


/*
Approach:

First split the list into two parts where the second part may have size equal or smaller to the
first part. Then reverse the second list. Now compare the two lists until the elements mismatch 
ir there are no more elements left.
*/