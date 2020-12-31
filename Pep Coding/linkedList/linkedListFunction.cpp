#include<bits/stdc++.h>
//#include "Node.cpp"
#include "linkedListFunction.h"
using namespace std;





Node::Node(int data) {
	this->data = data;
	next = NULL;
}


Node* takeInput() {
	int data;
	cin >> data;
	Node* head = NULL;
	Node* tail = NULL;

	while (data != -1)
	{
		Node* newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

void printLL(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* insertNode(Node* head, int i, int data)
{
	Node* newNode = new Node(data);
	int count = 0;
	Node* temp = head;

	if (i == 0)
	{
		newNode->next = temp;
		head = newNode;
		return head;
	}

	while (temp != NULL && count < i - 1) {
		temp = temp->next;
		count++;
	}

	if (temp != NULL) {
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return head;
}


Node* append(Node* head, int data)
{
	Node* newNode = new Node(data);
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newNode;


	return head;

}

Node* deleteNode(Node* head, int i)
{
	int count = 0;
	Node* temp = head;
	if (i == 0) {
		head = head->next;
		return head;
	}

	while (temp != NULL && count < i - 1)
	{
		temp = temp->next;
		count++;

	}
	if (temp != NULL)
	{
		temp->next = temp->next->next;
	}

	return head;
}

Node* mergeSortedLL(Node* head1, Node* head2)
{
	Node* fh = NULL;
	Node* ft = NULL;

	while (head1 != NULL && head2 != NULL)
	{
		if (fh == NULL)
		{
			if (head1->data <= head2->data)
			{
				fh = head1;
				ft = head1;

				head1 = head1->next;
			} else {
				fh = head2;
				ft = head2;

				head2 = head2->next;
			}
		}
		else {
			if (head1->data <= head2->data)
			{

				ft->next = head1;
				ft = ft->next;
				head1 = head1->next;
			} else {
				ft ->next = head2;
				ft = ft->next;
				head2 = head2->next;
			}
		}
	}
	while (head1 != NULL) {
		ft->next = head1;
		ft = ft->next;
		head1 =  head1->next;

	}
	while (head2 != NULL) {
		ft->next = head2;
		ft = ft->next;
		head2 =  head2->next;

	}

	return fh;
}

Node* midPoint(Node* head) {
	Node* slow = head;
	Node* fast = slow->next;

	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}
