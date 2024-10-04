/*
	This file was written by Hunter Manko
	This file is intended for @NGKValue
	All Rights Reserved @2024 NGKValue
*/
#pragma once

#ifndef QPLUGIN_H
#define QPLUGIN_H

#endif

#include "qfile.h"

class QPlugin {
public:

	int q_nPluginId = 0;

	const char* QPluginName;

	bool	PluginConnected;

	virtual void AddTo_Preferences( QPlugin );

	enum QPluginType {
		QMPlugin = 0,
		QBPlugin = 1,
		QGamePlugin = 2,
		QShaderPlugin = 3
	};

};
