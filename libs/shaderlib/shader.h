/*
==============================
      SHADER.H SHADER
==============================
*/
#pragma once 

#ifndef SHADER_H
#define SHADER_H

#endif

#include <file>

using namespace std;

typedef struct Shader{

 int sga_pixel = 35;
 int shader_points[3];

 enum ShaderType{
  FILE * png = 0, 
  FILE * jpeg = 0,
  FILE * tga = 0, 
  FILE * dds = 0,
  FILE * shader = 0
 };

  #define RGB_SHADER_PIXEL_VALUE 000

  bool Signal_Shader(Shader);

  virtual void Open_Shader(Shader * shader, const char * pShaderName);

  enum ShaderQuality{
    pSHBillinear = 0,
    pSHLinear = 0,
    pSHVhs = 0
  };

  Shader&& pShaderSignal_ShaderCallback;

};

