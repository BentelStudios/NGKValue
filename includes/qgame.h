/*
=====================================
     QGAME.H HANDLING GAME TYPE
=====================================
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
