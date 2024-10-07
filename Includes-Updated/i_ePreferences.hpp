/*
      *i_ePreferences.hpp belongs to NGKValue*
            *File is part of NGKValue*
*/
#pragma once

#ifndef __I_EGLOBALPREFERENCES__
#define __I_EGLOBALPREFERENCES__

#endif

typedef struct I_EGlobalPreferences{

  typedef char iEPreference;
  typedef void iEGlobalMethod;
  typedef bool iEBoolean;

static int i_eGlobalBytes[1024];

I_EGlobalPreferences *IECurrent, *IEPrevious, *IENext;

const iEPreference * __iEApplicationDirectory(char * iE[0])const;
const iEGlobalMethod IELoad_Preferences(I_EGlobalPreferences& i_eConstantGlobal)const;

iEBoolean i_eGlobalSignaledPreferences;

};
