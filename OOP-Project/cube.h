#pragma once
#include<iostream>
#include"bst.h"
using namespace std;
class cube_node {
	friend class cube;
private:
	bst tree;
	cube_node* up;
	cube_node* down;
	cube_node* left;
	cube_node* right;
	cube_node* front;
	cube_node* back;
public:
	cube_node() {
		up = nullptr;
		down = nullptr;
		left = nullptr;
		right = nullptr;
		front = nullptr;
		back = nullptr;
	}
	cube_node(string val) {
		tree.insert(val);
		up = nullptr;
		down = nullptr;
		left = nullptr;
		right = nullptr;
		front = nullptr;
		back = nullptr;
	}
};
class cube {
private:
	cube_node* root;
public:
	cube() {
		root = new cube_node();
	}
};