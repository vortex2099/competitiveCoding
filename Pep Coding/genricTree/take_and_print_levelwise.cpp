#include<bits/stdc++.h>
#include "Tree.cpp"
using namespace std;
// template <typename T>
// class TreeNode {

// public:
// 	T data;

// 	vector<TreeNode<T>*> children;
// 	TreeNode(T data) {
// 		this->data = data;
// 	}
// };


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



void printLevelwise(TreeNode<int>* root) {

	queue<TreeNode<int>*> pendingNode;
	pendingNode.push(root);

	while (pendingNode.size() != 0) {

		TreeNode<int>* front  = pendingNode.front();
		pendingNode.pop();
		cout << front->data << ":";
		for (int i = 0; i < int(front->children.size()); i++) {
			cout << front->children[i]->data << " ";
			pendingNode.push(front->children[i]);
		}
		cout << endl;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	TreeNode<int>* root = takeInput();
	printLevelwise(root);
	return 0;
}