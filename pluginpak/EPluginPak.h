/*------------------------*/
/*-------EPLUGINPAK-------*/
/*------------------------*/
#pragma once

#ifndef EPLUGINPAK_H
#define EPLUGINPAK_H

#endif

#define EPLUGIN_TYPE 000x111

typedef struct EPluginPak{

static int EPluginNumberId = 0;
bool EPluggedIn;

enum EPakType{
EPAKTYPE_BRUSH = 0, 
EPAKTYPE_TEXTURE = 1, 
EPAKTYPE_MODEL = 2
EPAKTYPE_SCON = 3
};

virtual void EPakBrush(const char * eBrushPakFileName, static int EPluginId);
virtual void EPakTexture(const char * eTexturePakFileName, static int EPluginId);
virtual void EPakModel(const char * eModelPakFileName, static int EPluginId);
virtual void EPakScon(const char * eSconPakFileName, static int EPluginId);

void EVerifyPak(EPluginPak * ePakType);
void OfficalFlush(const char * ePakFileName, EPluginPak);
bool FlushPak(EPluginPak);

};
