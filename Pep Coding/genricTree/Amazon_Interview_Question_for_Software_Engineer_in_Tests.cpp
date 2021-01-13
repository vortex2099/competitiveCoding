#include <bit/stdc++.h>
using namespace std;

class TreeNode {
public:
	int data;
	bool lock;
	std::vector<TreeNode*> children;

	TreeNode(int data) {
		this->data = data;
		lock = true;
	}
};

TreeNode* takeInput() {

	int data;
	cin >> data;
	TreeNode*  root = new TreeNode(data);
	queue<TreeNode*> pendingNode;
	pendingNode.push(root);

	while (pendingNode.size() != 0) {

		TreeNode* front = pendingNode.front();
		pendingNode.pop();

		int numchild;
		cin >> numchild;
		for (int i = 0; i < numchild; i++) {
			int childdata;
			cin >> childdata;
			TreeNode* child = new TreeNode(childdata);
			front->children.push_back(child);
			pendingNode.push(child);

		}
	}

	return root;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	return 0;
}