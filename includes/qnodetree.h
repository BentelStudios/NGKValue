/*
================================================
	QNODETREE.H TESTED WITH ERROR :(
================================================
*/
#pragma once

#ifndef QNODETREE_H
#define QNODETREE_H

#endif

#include <iostream>

/*---Node Tree---*/

struct node {

	int data;
	struct node* left;
	struct node* right;

};

struct node* NewNode( int idata ) {
	node* newnode = new struct node;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
};

struct node* Alloc_Node( node* n ) {
	node* n = ( node* )malloc( sizeof( node ) );
	return n;
};
