/*
==============================================================
          BSP.H DEFINE BINARY SPACE PARTITIONING
==============================================================
*/
#pragma once

#ifndef BSP_H
#define BSP_H

#endif

#define MAX_PLANE_NUMS 35000
#define MAX_BRUSH_NUMS 30000
#define MAX_LEAF_BSP_NODES 80000
#define MAX_BSP_TREE 100000

#include "node.h"
#include "entity.h"
#include "brush.h"

typedef class Bsp {
public:

   int          bsp_plane_nums[35000];
   int          bsp_brush_nums[30000];
   int          bsp_leaf_nodes[80000];

const static int bsp_tree_num[100000];

   Bsp * bsp;

   bool BSP_ACTIVE;

   inline void Split_BrushNode(EBrush * brush);
   inline void Add_BrushNode(EBrush * brush, const int brush_num);
   inline void Add_Node();
   inline void Add_Entity();

   enum BspType{
     BSP_CUTTER = 0x0,
     BSP_DEFINE = 1,
     BSP_SWAP = 2
   };

};
