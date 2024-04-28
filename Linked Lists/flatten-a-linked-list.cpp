/*
given a linked list containing 'n' 'head' nodes, where every node in the linked list contains two pointers:
(1) ‘next’ which points to the next node in the list
(2) ‘child’ pointer to a linked list where the current node is the head.
Each of these child linked lists is in sorted order and connected by 'child' pointer.

Your task is to flatten this linked such that all nodes appear in a single layer or level in a 'sorted order'.


Definition for linked list.
class Node {
 public:
   int data;
   Node *next;
   Node *child;
   Node() : data(0), next(nullptr), child(nullptr){};
   Node(int x) : data(x), next(nullptr), child(nullptr) {}
   Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};

Problem link - https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655
*/

Node *mergeList(Node *a, Node *b) {
	if(!a)	return b;
	if(!b)	return a;
	if(a->data <= b->data) {
		a->child = mergeList(a->child, b);
		return a;
	}
	b->child = mergeList(a, b->child);
	return b;
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	Node *a, *b, *c;
	if(!head or !head->next)	return head;
	a = head;
	b = a->next;
	while(b) {
		c = b->next;
		a = mergeList(a, b);
		b = c;
	}
	return a;
}

/*
Approach - 
At each iteration, take the first two lists' head and merge them recursively.
Treat this merged list as the first list and the next head as second list.
Do this until there is single list left.     
*/