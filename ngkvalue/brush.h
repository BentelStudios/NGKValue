#pragma once

#ifndef BRUSH_H
#define BRUSH_H

#endif

typedef bool eboolean;

typedef class EBrush {
public:

	int EBrushNumberId;

	eboolean Create_Brush( );

	int EBrushNums;

	EBrush* EPlane__Ptr;
	EBrush* eprev, * eowner, * enext;

};