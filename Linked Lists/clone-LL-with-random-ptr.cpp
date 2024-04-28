/*
A linked list given such that each node contains an additional random pointer, which could point to any node in the list, or null.
Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, 
where each new node has its value set to the value of its corresponding original node. 
Both the next and random pointer of the new nodes should point to new nodes in the copied list such that 
the pointers in the original list and copied list represent the same list state. 
None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, 
then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.


Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Problem link - https://leetcode.com/problems/copy-list-with-random-pointer/description/
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*>m;
        Node *t = head;
        Node *p;
        while(t) {
            p = new Node(t->val);
            m[t] = p;
            t = t->next;
        }
        t = head;
        while(t) {
            p = m[t];
            p->random = m[t->random];
            p->next = m[t->next];    
            t = t->next;
        }
        return m[head];
    }
};

/*
Appraoch - 
Maintain a map of Node* -> Node*.Traverse every node and create a new node with the same value.
Now store the address of old node mapped to address of new node. 
Traverse the original list again. Make the new node point to correct next and random ptr 
using this map to track down the correct node.
Return head of new list.
*/