/*
Given an array ‘Arr’ of size ‘N’ consisting of positive integers, make a linked list from the array 
and return the head of the linked list.
The head of the linked list is the first element of the array, and the tail of the linked list is the last element.

Definition of linked list
class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};

Problem link - https://www.naukri.com/code360/problems/introduction-to-linked-list_8144737
*/

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head = NULL;
    for(auto it=arr.rbegin(); it!=arr.rend(); it++){
        
        head = new Node(*it, head);
    }
    return head;
}

/*
Approach:

Make new node using the given constructor of class. Then make head point to the node.
*/