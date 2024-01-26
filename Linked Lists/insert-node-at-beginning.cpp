/*
Given the head of a linked list ‘list’ of size ‘N’ and an integer ‘newValue’, insert a node with the value ‘newValue’ 
at the beginning of the ‘list’ and return the new head of the linked list.

Problem Link - https://www.codingninjas.com/studio/problems/insert-node-at-the-beginning_8144739

 Definition of linked list
 class Node {
 
 public:
     int data;
     Node* next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node* next) : data(x), next(next) {}
 };
 */

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    list = new Node(newValue, list);
    return list;
}