/*
Given the head of a singly linked list, group all the nodes with odd indices together followed by 
the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.


Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

Problem link - https://leetcode.com/problems/odd-even-linked-list/

*/
typedef ListNode Node;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head or !head->next or !head->next->next)
            return head;

        Node *odd, *even, *ptr, *t, *otail, *etail;
        odd = head;
        even = odd->next;
        otail = odd;
        etail = even;
        ptr = even->next;

        odd->next = NULL;
        even->next = NULL;

        while(ptr) {
            t = ptr;
            ptr = ptr->next;
            t->next = NULL;
            otail->next = t;
            otail = t;

            if(ptr){
                t = ptr;
                ptr = ptr->next;
                t->next = NULL;
                etail->next = t;
                etail = t;
            }
        }
        otail->next = even;
        return odd;
    }
};

/*
Approach - 
Take two head ptrs and two tail ptrs to make two different lists. Then use a ptr to traverse 
and alternatively give each node to both the lists while maintaining the next ptrs of each node.
Then attach the even list to end of odd list.
Return head of odd list.
*/