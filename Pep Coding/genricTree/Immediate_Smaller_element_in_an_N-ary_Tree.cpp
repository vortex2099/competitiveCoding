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

int immediateSmaller(TreeNode<int>* root, int x) {

	queue<TreeNode<int>*> q;
	q.push(root);
	int max = root->data;

	while (q.size() != 0) {
		TreeNode<int>* front  = q.front();
		q.pop();

		if (front->data < x && front->data >= max) {
			max = front->data;
		}
		for (int i = 0; i < int(front->children.size()); i++) {
			q.push(front->children[i]);
		}

	}

	return max;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	TreeNode<int>* root = takeInput();


	printLevelwise(root);




	cout << immediateSmaller(root, 30);



	return 0;
}