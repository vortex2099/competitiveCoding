#include<bits/stdc++.h>
#include "linkedListFunction.cpp"
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	Node* head = takeInput();
	printLL(head);
	cout << endl;
	head = insertNode(head, 2, 102);
	printLL(head);
	cout << endl;
	head = append(head, 123);
	printLL(head);
	cout << endl;
	head = deleteNode(head, 7);
	printLL(head);


	return 0;
}