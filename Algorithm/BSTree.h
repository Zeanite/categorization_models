
//
//  BSTree.h
//  Algorithm
//
//  Created by Freya Hayashi on 1/20/17.
//  Copyright (c) 2017 Freya Hayashi. All rights reserved.
//

#ifndef __Algorithm__BSTree__
#define __Algorithm__BSTree__

class BSTree {
public:
	struct Node {
		int value, grade;
		Node * parent;
		Node * left, * right;
	};
	BSTree();