#include<bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

void postorderUsingIteration(BT<int>* root) {

	stack<BT<int>*> s1;
	stack<BT<int>*> s2;

	s1.push(root);

	while (s1.size() != 0) {

		BT<int>* cur = s1.top();
		s1.pop();
		s2.push(cur);
		if (cur->left != NULL)
			s1.push(cur->left);
		if (cur->right != 0)
			s1.push(cur->right);
	}

	while (s2.size() != 0) {
		cout << s2.top()->data << " ";
		s2.pop();
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
	postorderUsingIteration(root);
	return 0;
}