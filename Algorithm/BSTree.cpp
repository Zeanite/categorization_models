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
	h->right