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

	EBrush* EPlane__Ptr;
	EBrush* eprev, * eowner, * enext;

	void Brush_Shader(const char * pShaderName, EBrush& brush);
	virtual void Construct_Brush(EBrush * brush, const char * name, unsigned int BrushSpawnflags);
	void New_Brush(EBrush * new_brush, bool previous_brush);
	virtual void Add_BrushToBsp(EBrush * brush, const char * name, int brush_leaf, Bsp * bsp_node);
	void Brush_Mode(EBrush * brush_mode, enum EMode);

};
