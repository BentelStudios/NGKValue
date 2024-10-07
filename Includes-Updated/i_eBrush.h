/*
      *This file belongs to NGKValue*
            *File: i_eBrush.h*
*/
#pragma once 

#ifndef I_EBRUSH_H
#define I_EBRUSH_H

#endif

#include "i_ePreferences.hpp"

typedef class i_eBrush{
protected:
const iEPreference * i_eBrushName(i_eBrush*)const;

public:

static int i_eBrushNumberid = 0;
iEBoolean i_eBrushCreated();

enum i_eBrushMode{
  i_eFreeMode = 0,
  i_eLockMode = 1,
  i_ePrintMode = 2,
  i_ePrimitMode = 3,
  i_eEpairMode = 4
};

iEBoolean BrushDeleted(i_eBrush);

};
