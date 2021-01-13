#include<bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

// BT<int>* takeInput() {
// 	int rootdata;
// 	cin >> rootdata;
// 	if (rootdata == -1)
// 		return NULL;
// 	BT<int>* root = new BT<int>(rootdata);
// 	queue<BT<int>*> q;
// 	q.push(root);
// 	while (q.size() != 0) {

// 		BT<int>* front = q.front();
// 		q.pop();
// 		int leftdata;
// 		cin >> leftdata;
// 		if (leftdata != -1) {
// 			BT<int>* leftchild = new BT<int>(leftdata);
// 			front->left = leftchild;
// 			q.push(leftchild);
// 		}
// 		int rightdata;
// 		cin >> rightdata;
// 		if (rightdata != -1) {
// 			BT<int>* rightchild = new BT<int>(rightdata);
// 			front->right = rightchild;
// 			q.push(rightchild);
// 		}
// 	}

// 	return root;

// }

// void printLevelwise(BT<int>* root) {
// 	if (root == NULL)
// 		return;

// 	queue<BT<int>*> q;
// 	q.push(root);
// 	while (q.size()) {
// 		BT<int>* front = q.front();
// 		q.pop();
// 		cout << front->data << ":" << " ";
// 		if (front->left != NULL) {
// 			q.push(front->left);
// 			cout << "L " << front->left->data << " ,";
// 		}
// 		if (front->right != NULL) {
// 			q.push(front->right);
// 			cout << "R " << front->right->data;
// 		}
// 		cout << endl;
// 	}
// }


int sumSubtree(BT<int>* root) {
	if (root == NULL)
		return 0;

	return (root->data + sumSubtree(root->left) + sumSubtree(root->right));
}

int countSubtree(BT<int>* root, int x) {
	if (root == NULL)
		return 0;
	int count = 0;

	if (sumSubtree(root) == x) {
		count  = count + 1;
	}
	return (count + countSubtree(root->left, x) + countSubtree(root->right, x));
}


// void inorderUsingLoop(BT<int>* root) {
// 	stack<BT<int>*> s;
// 	s.push(root);
// 	while (stack.size() != 0) {

// 	}
// }

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	BT<int>* root = takeInput();
	printLevelwise(root);

	//cout << endl << sumSubtree(root);
	cout << endl << countSubtree(root, 7);


	return 0;
}