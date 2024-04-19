/*
Given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.]
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    void add(Node *n1, Node *n2, int carry) {
        if(n1->next and n2->next) {
            int sum = n1->next->val + n2->next->val + carry;
            carry = sum/10;
            n1->next->val = sum%10;
            add(n1->next, n2->next, carry);
        }
        else if(n1->next) {
            int sum = n1->next->val + carry;
            carry = sum/10;
            n1->next->val = sum%10;
            if(carry)
                add(n1->next, n2, carry);
        }
        else if(n2->next) {
            int sum = n2->next->val + carry;
            carry = sum/10;
            Node *n = new ListNode(sum%10);
            n1->next = n;
            add(n1->next, n2->next, carry);
        }
        else if(carry) {
            Node *n = new ListNode(carry);
            n1->next = n;
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        Node *n1, *n2;
        n1 = l1;
        n2 = l2;
        int carry = (n1->val+n2->val)/10;
        n1->val = (n1->val+n2->val)%10;
        add(n1, n2, carry);

        return l1;
    }
};

/*
Approach - 
Make changes in list1 iteratively. If necessary, add nodes to it when adding.
Return its head at last.
*/