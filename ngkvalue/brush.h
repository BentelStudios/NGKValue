/*
==================================================================
	BRUSH.H HOLDING BRUSH INFORMATION AND COMMANDS
==================================================================
*/
#pragma once

#ifndef BRUSH_H
#define BRUSH_H

#endif

#define BRUSH_POINTS_NUM 0x8

#include "bsp.h"

typedef bool eboolean;

typedef class EBrush {
public:

	int EBrushNumberId;

	eboolean Create_Brush(EBrush * brush, char * staticBrush[1024]);

	int EBrushNums;

	EBrush* EPlanePtr;
	EBrush* eprev, * eowner, * enext;

	void Brush_Shader(const char * pShaderName, EBrush& brush);
	virtual void Construct_Brush(EBrush * brush, const char * name, unsigned int BrushSpawnflags);
	void New_Brush(EBrush * new_brush, bool previous_brush);
	virtual void Add_BrushToBsp(EBrush * brush, const char * name, int brush_leaf, Bsp * bsp_node);
	void Brush_Mode(EBrush * brush_mode, enum EMode);	
	void Split_Brush(EBrush * current, int split_points);
	void Drag_Brush(EBrush * brush, eboolean brush_selected);
	void Brush_EPair(EBrush * brush, const char * eKey, const char * eValue);
	void Brush_Free(EBrush * brush);
	void Brush_Lock(EBrush * brush);
	void Brush_Alloc(EBrush * brush);
	void Brush_Null(EBrush * NullBrush);
	EBrush * EClamp; EBrush * ELockPoints; EBrush * ETagBrush;
};
