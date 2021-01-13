#include<bits/stdc++.h>
#include "Tree.cpp"
using namespace std;

TreeNode<int>* takeInput() {

	int data;
	cin >> data;
	TreeNode<int>*  root = new TreeNode<int>(data);
	queue<TreeNode<int>*> pendingNode;
	pendingNode.push(root);

	while (pendingNode.size() != 0) {

		TreeNode<int>* front = pendingNode.front();
		pendingNode.pop();

		int numchild;
		cin >> numchild;
		for (int i = 0; i < numchild; i++) {
			int childdata;
			cin >> childdata;
			TreeNode<int>* child = new TreeNode<int>(childdata);
			front->children.push_back(child);
			pendingNode.push(child);

		}
	}

	return root;

}

int secondLargest(TreeNode<int>* root, int largest, int second) {
	if (root == NULL)
		return 0;
	if (root->data > largest) {
		second = largest;
		largest = root->data;
	}
	for (int i = 0; i < int(root->children.size()); i++) {
		secondLargest(root->children[i], largest, second);
	}

	return second;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	TreeNode<int>* root = takeInput();

	int largest = 0;
	int second = 0;

	cout << secondLargest(root, largest, second);



	return 0;
}