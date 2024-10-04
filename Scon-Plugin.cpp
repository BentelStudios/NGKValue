/*
  ===========================================
  scon-plugin.cpp by value programmer

  $Purpose File: Handle Plugins To NGKValue

  $Written: 10/4/2024
  ===========================================
*/

#define PLUGIN_SCON 0x1

struct SconPlugin{

 int SconId = 0;

 bool Plugged_In;

 enum SPluginType{
  UI_PLUGIN = 0,
  DOMAIN_PLUGIN = 0,
  SCHEME_PLUGIN = 0
 };

 SconPlugin * sconSType;
 virtual void SconType( SconPlugin * sPlugin = SPluginType );
 virtual void SconVersion( SconPlugin * sPlugin, int Version );
 virtual void SconName( const char * sconFileName );

};

