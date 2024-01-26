/*
Given a Singly Linked List of integers with a head pointer and a value 'K'. Every node of the Linked List has a value written on it.
Your task is to check whether a node with a value equal to 'K' exists in the given linked list. 
Return 1 if node exists else return 0.

Problem link - https://www.codingninjas.com/studio/problems/search-in-a-linked-list_975381

structure of the Node class:

template <typename T>
class Node
{
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
};
*/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int> *t = head;
    while(t){
        if(t->data==k)  return 1;
        t = t->next;
    }
    return 0;
}