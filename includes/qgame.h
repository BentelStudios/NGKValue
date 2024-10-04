/*
	This file was written by Hunter Manko
	This file is intended for @NGKValue
	All Rights Reserved @2024 NGKValue
*/
#pragma once

#ifndef QGAME_H
#define QGAME_H

#endif

#include "qfile.h"

typedef bool qboolean;

struct QGame {
public:

	enum QGameType {
		QWarfalls = 0,
		QCustom = 1
	};

	qboolean LoadedGameDirectory;

};