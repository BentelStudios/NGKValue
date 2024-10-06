/*
====================================
       CAULK.H BRUSH TEXTURE
====================================
*/
#pragma once 

#ifndef CAULK_H
#define CAULK_H

#endif

#include "shader.h"

#define CAULK_SHADER_PIXEL 000x000

typedef struct caulk{

 bool cCaulkBrushShader = true;

 static int cCaulkSpawnflags = 2;

 enum cCaulkColor{
  CAULK_WHITE = 0,
  CAULK_PINK = 1,
  CAULK_YELLOW = 2
 };

 void Open_Caulk(caulk * cCaulk, Shader * scCaulk, const char * cCaulkShaderName);
 virtual void Alloc_CaulkBrush(caulk * c = (caulk*)malloc(sizeof(caulk)));

};
