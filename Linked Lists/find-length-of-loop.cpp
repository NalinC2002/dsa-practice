/*
Given a linked list. The last node might point to null, or it might point to a node in the list, thus forming a cycle.
Find out whether the linked list has a cycle or not, and the length of the cycle if it does.
If there is no cycle, return 0, otherwise return the length of the cycle.

Definition of linked list:

class Node {
public:
     int data;
     Node *next;

     Node(int data) {
         this->data = data;
         this->next = NULL;
     }
};

Problem link - https://www.naukri.com/code360/problems/find-length-of-loop_8160455

*/

int lengthOfLoop(Node *head) {
    // Write your code here
    Node *sl, *fs;
    sl = fs = head;
    int count=1;

    do {
        sl = sl->next;
        fs = fs->next->next;
    }while(sl!=fs and fs!=NULL and fs->next!=NULL);

    if(!fs or !fs->next)    return 0;
    else{
        Node *p = sl->next;
        while(sl!=p) {
            p = p->next;
            count++;
        }
    }
    return count;
}

/*
Approach - 
Detect the loop first. Now if there is a loop then point a new ptr to sl-next 
and count till we traverse the same node again.
Return count.
*/