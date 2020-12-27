#include<bits/stdc++.h>
using namespace std;
#include "linkedListFunction.cpp"


Node* midPoint(Node* head) {
	Node* slow = head;
	Node* fast = slow->next;

	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif


	Node* head = takeInput();
	Node* mid = midPoint(head);
	cout << mid->data;
	return 0;
}