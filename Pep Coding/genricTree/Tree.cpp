#include<bits/stdc++.h>
#include "Tree.h"
//using namespace std;
template<typename T>
TreeNode<T> :: TreeNode(T data) {
	this->data = data;
}



// TreeNode<int>* takeInput() {

// 	int data;
// 	std::cin >> data;
// 	TreeNode<int>*  root = new TreeNode<int>(data);
// 	std::queue<TreeNode<int>*> pendingNode;
// 	pendingNode.push(root);

// 	while (pendingNode.size() != 0) {

// 		TreeNode<int>* front = pendingNode.front();
// 		pendingNode.pop();

// 		int numchild;
// 		std::cin >> numchild;
// 		for (int i = 0; i < numchild; i++) {
// 			int childdata;
// 			std::cin >> childdata;
// 			TreeNode<int>* child = new TreeNode<int>(childdata);
// 			front->children.push_back(child);
// 			pendingNode.push(child);

// 		}
// 	}

// 	return root;

// }

// void printLevelwise(TreeNode<int>* root) {

// 	std::queue<TreeNode<int>*> pendingNode;
// 	pendingNode.push(root);

// 	while (pendingNode.size() != 0) {

// 		TreeNode<int>* front  = pendingNode.front();
// 		pendingNode.pop();
// 		std::cout << front->data << ":";
// 		for (int i = 0; i < int(front->children.size()); i++) {
// 			std::cout << front->children[i]->data << " ";
// 			pendingNode.push(front->children[i]);
// 		}
// 		std::cout << std::endl;
// 	}
// }