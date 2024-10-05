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
#include "mathlib.h"

typedef struct Clip{

  Clip();
  virtual ~Clip();

bool cDisableCollision = true;

int cClipSpawnflags = 1;
/*----------------------------------------------------*/
/*---CLIP PREFERENECES ARE THE CLIPS KEY AND VALUES---*/
/*----------------------------------------------------*/
void cClipPreferences(Clip * cSelectedClip, const char * cKey = "classname", const char * cValue = "clip");
virtual void cClipShader(Clip * clip, Shader * cShader, const char * pcClipShaderName);

vec3 cClipvectors(c1, c2, c3);

};
