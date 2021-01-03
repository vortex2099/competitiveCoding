
#include<bits/stdc++.h>
//#include "Tree.cpp"
using namespace std;
template <typename T>
class TreeNode {

public:
	T data;

	vector<TreeNode<T>*> children;
	TreeNode(T data) {
		this->data = data;
	}
};


TreeNode<char>* takeInput() {

	char data;
	cin >> data;
	TreeNode<char>*  root = new TreeNode<char>(data);
	queue<TreeNode<char>*> pendingNode;
	pendingNode.push(root);

	while (pendingNode.size() != 0) {

		TreeNode<char>* front = pendingNode.front();
		pendingNode.pop();

		int numchild;
		cin >> numchild;
		for (int i = 0; i < numchild; i++) {
			char childdata;
			cin >> childdata;
			TreeNode<char>* child = new TreeNode<char>(childdata);
			front->children.push_back(child);
			pendingNode.push(child);

		}
	}

	return root;

}



void printLevelwise(TreeNode<char>* root) {

	queue<TreeNode<char>*> pendingNode;
	pendingNode.push(root);

	while (pendingNode.size() != 0) {

		TreeNode<char>* front  = pendingNode.front();
		pendingNode.pop();
		cout << front->data << ":";
		for (int i = 0; i < char(front->children.size()); i++) {
			cout << front->children[i]->data << " ";
			pendingNode.push(front->children[i]);
		}
		cout << endl;
	}
}

void printKthChild(TreeNode<char>* root, TreeNode<char>* find, int k) {
	if (root->data == find->data) {
		cout << root->children[k - 1]->data;
	}
	else {
		for (int i = 0; i < int(root->children.size()); i++) {
			printKthChild(root->children[i], find, k);
		}
	}


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	TreeNode<char>* root = takeInput();
	printLevelwise(root);
	TreeNode<char>* find = new TreeNode<char>('F');
	printKthChild(root, find, 2);
	return 0;
}