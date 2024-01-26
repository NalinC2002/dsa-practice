/*
Given the head of a singly linked list of integers, find and return its length.

Problem link - https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884

Structure of the Node class:
class Node
{
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
};
*/

int length(Node *head)
{
	//Write your code here
    Node *t = head;
    int len = 0;
    while(t){
        len++;
        t = t->next;
    }
    return len;
}