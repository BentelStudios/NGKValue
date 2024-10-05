/*
============================================
        CLIP.H BLOCK AI AND PLAYER 
============================================
*/

#ifndef CLIP_H
#define CLIP_H

#endif

#define CLIP_PLAYER 0x0
#define CLIP_AI 1x0

#include "clip.h"

typedef struct Clip{

  Clip();
  virtual ~Clip();

bool cDisableCollision = true;

int cClipSpawnflags = 1;

virtual void cClipShader(Clip * clip, Shader * cShader, const char * pcClipShaderName);


};
