#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

Node* newnode(int key)
{
	Node* temp = new Node;

	temp-> data = key;
	temp->next = NULL;

	return temp;

}

void printlist(Node* head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		if (head->next != NULL)
			cout << "->";
		head = head->next;
	}
}


void reverselist(Node** head)
{
	Node *prev = NULL , *cur = *head, *next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
}

void rearrangelist(Node** head)
{
	Node *slow = *head, *fast = slow->next;

	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	Node *head1 = *head;
	Node *head2 = slow->next;
	slow->next = NULL;

	reverselist(&head2);

	*head = newnode(0);

	Node *curr = *head;

	while (head1 != NULL || head2 != NULL) {

		if (head1 != NULL) {
			curr->next = head1;
			curr = curr->next;
			head1 = head1->next;
		}

		if (head2 != NULL) {
			curr->next = head2;
			curr = curr->next;
			head2 = head2->next;
		}
	}

	*head = (*head)->next;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	Node* head = newnode(1);
	head->next = newnode(2);
	head->next->next = newnode(3);
	head->next->next->next = newnode(4);
	head->next->next->next->next = newnode(5);
	// head->next->next->next->next->next = newnode(6);

	printlist(head);
	// reverselist(&head);
	// printlist(head);
	rearrangelist(&head);
	cout << endl;
	printlist(head);






	return 0;
}