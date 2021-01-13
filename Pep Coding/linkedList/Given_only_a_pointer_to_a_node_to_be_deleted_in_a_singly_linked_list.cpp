#include<bits/stdc++.h>
#include "linkedListFunction.cpp"
using namespace std;


void deleteNthNode(Node* node) {
	Node* temp = NULL;

	if (node == NULL)
		return;
	else {
		temp = node->next;
		node->data = temp->data;
		node->next = temp->next;
	}
}




int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	Node* head = takeInput();
	printLL(head);

	deleteNthNode(head->next);
	cout << endl;
	printLL(head);


	return 0;
}