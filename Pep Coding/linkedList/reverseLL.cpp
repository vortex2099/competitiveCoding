#include<bits/stdc++.h>
#include "linkedListFunction.cpp"
using namespace std;

Node* reverseLL(Node* head) {
	Node* prev = NULL;
	Node* curr = head;
	Node* next;

	while (curr != NULL) {

		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;

	}

	return prev;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);

#endif

	Node* head = takeInput();
	printLL(head);
	cout << endl;
	head = reverseLL(head);
	printLL(head);
	return 0;

}