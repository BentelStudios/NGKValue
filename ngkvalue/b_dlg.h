#pragma once

#ifndef B_DLG_H
#define B_DLG_H

#endif 

#include "QWidget.h"
#include "brush.h"
#include "texture.h"
#include "patch.h"
#include "csg.h"

typedef class BrushDialog{
public:

const int Init_BDlg = NULL;

/*
DIALOG BUTTON OPTIONS
*/
static int FitTexture;
static int LMapTexture;
static int SmoothTexture;

double VTextureScale;
double HTextureScale;

bool IncreaseStretch(Texture);
bool DecreaseStretch(Texture);

Texture *currentTexdef, *prevTexdef, *newTexdef;

void BDlgGetCurrentBrush(EBrush * selectedbrush, Texture& texdef);

};
