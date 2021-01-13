#include<bits/stdc++.h>
#include "binaryTree.h"
using namespace std;
template <typename T>
BT<T>::BT(T data) {
	this->data = data;
	left = NULL;
	right = NULL;

}

BT<int>* takeInput() {
	int rootdata;
	cin >> rootdata;
	if (rootdata == -1)
		return NULL;
	BT<int>* root = new BT<int>(rootdata);
	queue<BT<int>*> q;
	q.push(root);
	while (q.size() != 0) {

		BT<int>* front = q.front();
		q.pop();
		int leftdata;
		cin >> leftdata;
		if (leftdata != -1) {
			BT<int>* leftchild = new BT<int>(leftdata);
			front->left = leftchild;
			q.push(leftchild);
		}
		int rightdata;
		cin >> rightdata;
		if (rightdata != -1) {
			BT<int>* rightchild = new BT<int>(rightdata);
			front->right = rightchild;
			q.push(rightchild);
		}
	}

	return root;

}

void printLevelwise(BT<int>* root) {
	if (root == NULL)
		return;

	queue<BT<int>*> q;
	q.push(root);
	while (q.size()) {
		BT<int>* front = q.front();
		q.pop();
		cout << front->data << ":" << " ";
		if (front->left != NULL) {
			q.push(front->left);
			cout << "L " << front->left->data << " ,";
		}
		if (front->right != NULL) {
			q.push(front->right);
			cout << "R " << front->right->data;
		}
		cout << endl;
	}
}
