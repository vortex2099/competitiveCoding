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

bool isMirror(TreeNode<int>* root1, TreeNode<int>* root2) {

	queue<TreeNode<int>*> queue1;
	queue<TreeNode<int>*> queue2;
	queue1.push(root1);
	queue2.push(root2);

	while (queue1.size() != 0 && queue2.size() != 0) {
		TreeNode<int>* front1 = queue1.front();
		TreeNode<int>* front2 = queue2.front();
		queue1.pop();
		queue2.pop();

		if (front1->data != front2->data) {
			return false;
		}

		for (int i = 0; i < int(front1->children.size()); i++) {
			queue1.push(front1->children[i]);
		}
		for (int i = front2->children.size() - 1; i >= 0; i--) {
			queue2.push(front2->children[i]);
		}
	}

	return true;
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

	TreeNode<int>* root1 = takeInput();
	TreeNode<int>* root2 = takeInput();

	printLevelwise(root1);
	cout << endl;
	printLevelwise(root2);

	cout << isMirror(root1, root2);



	return 0;
}