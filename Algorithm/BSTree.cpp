//
//  BSTree.cpp
//  Algorithm
//
//  Created by Freya Hayashi on 1/20/17.
//  Copyright (c) 2017 Freya Hayashi. All rights reserved.
//

#include "BSTree.h"
#include <iostream>

BSTree::BSTree() {
	root = nullptr;
}

BSTree::~BSTree() {
	
}

BSTree::Node * BSTree::add(int key) {
	Node * h = new Node;
	h->value = key;
	h->right = h->left = nullptr;
	h->grade = 0;
	if(root == nullptr) {
		root = h;
		return root;
	}
	return add(h, root);
}

BSTree::Node * BSTree::add(Node * h, Node * to) {
	Node * head = to;
	while(head != nullptr) {
		if(h->value < head->value) {
			if (head->left == nullptr) {
				head->left = h;
				h->parent = head;
				head = nullptr;
			}
			else head = head->left;
		}
		else {
			if (head->right == nullptr) {
				head->right = h;
				h->parent = head;
				head = nullptr;
			}
			else head = head->right;
		}
	}
	spreadUp(h);
	return h;
}


void BSTree::spreadUp(BSTree::Node * node) {
	if (node == nullptr) return;
	int l = 0, r = 0;
	if (node->left != nullptr) l = node->left->grade + 1;
	if (node->right != nullptr) r = node->right->grade + 1;
	int diff = l - r;
	node->grade = l > r 