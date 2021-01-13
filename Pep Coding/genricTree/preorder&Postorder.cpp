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


void postorder(TreeNode<int>* root) {
	if (root == NULL)
		return;

	for (int i = 0; i < int(root->children.size()); i++)
	{
		postorder(root->children[i]);
	}

	cout << root->data << " ";
}

void preorder(TreeNode<int>* root) {
	if (root == NULL)
		return;

	cout << root->data << " ";
	for (int i = 0; i < int(root->children.size()); i++) {
		preorder(root->children[i]);
	}
}

int countLeafNode(TreeNode<int>* root) {
	if (root->children.empty())
		return 1;

	int ans = 0;

	for (int i = 0; i < int(root->children.size()); i++) {
		ans = ans + countLeafNode(root->children[i]);
	}

	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	TreeNode<int>* root = takeInput();


	printLevelwise(root);




	postorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	cout << countLeafNode(root);



	return 0;
}