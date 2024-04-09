/*
Given an array ‘Arr’ of size ‘N’ consisting of positive integers, make a doubly linked list from the array 
and return the head of the linked list. Head of the doubly linked list is the first element of the array, 
and the tail of the doubly linked list is the last element.

Problem link - https://www.naukri.com/code360/problems/introduction-to-doubly-linked-list_8160413
*/

Node* constructDLL(vector<int>& arr) {
    // Write your code here

    Node *head=NULL, *n;
    for(auto i=arr.rbegin(); i!=arr.rend(); i++) {
        n = new Node(*i, head, NULL);
        //cout<<n->data<<" "<<int(head==NULL)<<"   ";
        if(head) 
            head->prev = n;
        head = n;
    }
    return head;
}

/*
Approach:
Make new nodes using the function provided inside class. First set the prev ptr of head to be the new node.
Then change head to new node.
*/