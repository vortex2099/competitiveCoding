#ifndef _A_H // must be unique name in the project
#define _A_H

class Node {
public:
	int data;
	Node * next;


	Node(int data) ;
};



Node* takeInput();
void printLL(Node* head);
Node* insertNode(Node* head, int i, int data);
Node* append(Node* head, int data);
Node* deleteNode(Node* head, int i);
Node* mergeSortedLL(Node* head1, Node* head2);
Node* midPoint(Node* head);// prototype declaration of the function in a.cpp

#endif

