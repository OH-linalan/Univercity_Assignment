#pragma once
#include <iostream>
#include<string>
using namespace std;
class node {
	friend class bst;
private:
	string value;
	node* left;
	node* right;
public:
	node() {
		left = nullptr;
		right = nullptr;
	}
	node(string val) {
		value = val;
		left = nullptr;
		right = nullptr;
	}
	~node() {
	}
};
class bst {
private:
	node* root;
public:
	bst() {
		root = nullptr;
	}
	~bst() {
		delete root;
	}
	void insert(string val) {
		int i = cover_insert(root, val);
		if (i == 1) {
			cout << "insert complete" << endl;
		}
		if (i == 0) {
			cout << "value is already exist" << endl;
		}
	}
	int cover_insert(node*& current, string val) {
		if (current == nullptr) {
			current = new node(val);
			return 1;
		}
		else if (current->value > val) {
			return cover_insert(current->left, val);
		}
		else if (current->value < val) {
			return cover_insert(current->right, val);
		}
		return 0;
	}
	void search(string val) {
		node* current = root;
		cout << "result: ";
		while (current) {
			if (current->value == val) {
				cout << current->value << endl;
				return;
			}
			else if (current->value > val) {
				cout << current->value << "->";
				current = current->left;
			}
			else if (current->value < val) {
				cout << current->value << "->";
				current = current->right;
			}
		}
		cout << "finding value isn't exist" << endl;
		return;
	}
	void remove(string val) {
		cover_remove(root, val);
	}
	node*& small_node_finder(node*& current) {
		while (current->left) {
			current = current->left;
		}
		return current;
	}
	void remove_childish_node(node*& replaced, node*& newvalue) {
		if (replaced == nullptr || newvalue == nullptr) {
			return;
		}
		if (replaced->left != nullptr && replaced->right != nullptr) {
			newvalue->left = replaced->left;
			if (replaced->right != newvalue)
				newvalue->right = replaced->right;
		}

		node* temp = replaced;
		replaced = newvalue;
		delete temp;

		return;
	}
	void cover_remove(node*& current, string val) {
		if (current->value == val) {
			if (current->left == nullptr && current->right == nullptr) {
				delete current;
				current = nullptr;
				return;
			}
			else if (current->left != nullptr && current->right != nullptr) {
				remove_childish_node(current, small_node_finder(current->right));
				return;
			}
			else if (current->left != nullptr && current->right == nullptr) {
				remove_childish_node(current, current->left);
				return;
			}
			else if (current->left == nullptr && current->right != nullptr) {
				remove_childish_node(current, current->right);
				return;
			}
		}
		else if (current->value > val) {
			cover_remove(current->left, val);
		}
		else if (current->value < val) {
			cover_remove(current->right, val);
		}
		return;
	}
};