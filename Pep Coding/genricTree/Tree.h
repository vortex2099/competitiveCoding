#ifndef _TREE_H // must be unique name in the project
#define _TREE_H

#include<bits/stdc++.h>


template <typename T>
class TreeNode {

public:
	T data;

	std::vector<TreeNode<T>*> children;
	TreeNode(T data) ;
};


#endif