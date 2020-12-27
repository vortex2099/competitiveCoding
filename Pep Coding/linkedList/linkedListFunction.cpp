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