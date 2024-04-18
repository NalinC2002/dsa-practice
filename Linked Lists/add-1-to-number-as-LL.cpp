/*
Given a positive integer represented in the form of a singly linked-list of digits. The length of the number is 'n'.
Add 1 to the number, i.e., increment the given number by one.
The digits are stored such that the most significant digit is at the head of the linked list 
and the least significant digit is at the tail of the linked list.

Definition of linked list:

class Node {
public:
     int data;
     Node *next;
     Node() {
         this->data = 0;
         this->next = NULL;
     }
     Node(int data) {
         this->data = data;
         this->next = NULL;
     }
     Node (int data, Node *next) {
         this->data = data;
         this->next = next;
     }
};

Problem link - https://www.naukri.com/code360/problems/add-one-to-a-number-represented-as-linked-list_920557
*/

int add(Node *t) {
    int carry;
    if(!t->next) {
        carry = (t->data + 1)/10;
        t->data = (t->data + 1)%10;
    }
    else {
        int sum = t->data + add(t->next);
        carry = sum/10;
        t->data = sum%10;
    }
    return carry;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
    Node *t = head;

    int carry = add(t);

    if(carry) {
        head = new Node(carry, head);
    } 
    return head;
}

/*
Approach - 
Since the addition is to be first done on last node and then changes to be reflected 
on prev nodes after that, recursion needed.
Recurse till last node and add 1 to it, return carry to prev nodes.
If first node gets a carry then create a new node with carry as value.
*/