/*
	This file was written by Hunter Manko
	This file is intended for @NGKValue
	All Rights Reserved @2024 NGKValue
*/
#pragma once

#ifndef QNODE_H
#define QNODE_H

#endif

#include <cstring>

class QNode {
public:

	QNode( );
	~QNode(	);

	float NodeMatrixTranslation;//node translation
	float NodeMatrixRotation;//node rotation

		virtual bool CreatedNode( );

		virtual void ConstructNode( );

		enum QNodeType {
			PATH_NODE = 0, 
			COVER_NODE = 1,
			CROUCH_NODE = 2,
			PRONE_NODE = 3,
			VEHICLE_NODE = 4,
			HINT_NODE = 5,
			__QN__GRID__NODE__ = 6,
			SCRIPT_NODE = 7
		};

		QNode* prev, * owner, * next;

		//create node
		void Create_QNode( );
		//add to node list
		virtual void Add_NodeToList( );
		//add node color
		void Print_QNodeColor( );
		//call node type
		void QNode_Type( );
		//allocate node
		QNode	 * Node_Alloc( );
		//memory allocate node
		void MemAllocate_Node( );
		//node classname should be "worldspawn"
		void _QNodeClassname( QNode * node, const char * classname );
		//node free aka destruct
		void Node_Free( );
		//clone current node
		QNode * Node_Clone( );

};