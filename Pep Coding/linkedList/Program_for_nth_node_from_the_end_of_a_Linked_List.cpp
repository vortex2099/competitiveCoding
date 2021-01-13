#include<bits/stdc++.h>
#include "linkedListFunction.cpp"
using namespace std;

int countNode(Node* head) {
	int count = 0;

	Node* temp = head;
	while (temp != NULL) {
		temp = temp->next;
		count++;
	}

	return count;
}

Node* nthNodefromEnd(Node* head, int n) {

	int count = countNode(head);
	int cnt = 0;

	Node* temp = head;
	while (cnt != (count - n ) ) {
		temp = temp->next;
		cnt++;
	}

	return temp;
}






int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	Node* head = takeInput();
	printLL(head);
	cout << endl;
	cout << countNode(head);
	cout << endl << (nthNodefromEnd(head, 3))->data;



	return 0;
}