#include<bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;


void printInorderWithoutRecursion(BT<int>* root)
{
	stack<BT<int>*> s;
	BT<int>* cur = root;

	while (cur != NULL || s.size() != 0) {
		while (cur != NULL) {

			s.push(cur);
			cur = cur->left;
		}

		cur = s.top();
		s.pop();

		cout << cur->data << " ";

		cur = cur->right;
	}
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	BT<int>* root = takeInput();
	printLevelwise(root);
	cout << endl;
	printInorderWithoutRecursion(root);
	return 0;
}