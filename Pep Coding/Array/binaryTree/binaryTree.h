
#ifndef BINARYTREE_H
#define BINARYTREE_H
template <typename T>
class BT {
public:

	T data;
	BT* left;
	BT* right;

	BT(T data);
};

BT<int>* takeInput();
void printLevelwise(BT<int>* root);
#endif