#include<bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;



void diagonal(BT<int>* root) {

	queue<BT<int>*> q;
	q.push(root);
	while (q.size() != 0) {
		BT<int>* cur = q.front();
		q.pop();

		while (cur != NULL) {
			q.push(cur->left);
			cout << cur->data << " ";
			cur = cur->right;
		}

	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	BT<int>* root = takeInput();
	printLevelwise(root);
	cout << endl;
	diagonal(root);
	return 0;
}