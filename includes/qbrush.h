/*
==========================================================

							This file is programmed by hunter manko @2024

==========================================================
*/
#pragma once

typedef struct QBrush {
	/*
	= ========================
		QBrush.h is just a data structure for
		handling brushes and geometry
	=========================
	*/

	/*Brush Active*/
	int	q_activebrush;
	/*Brush Node*/
	int	q_brushnode;

	/*Brush Node Active*/
	bool		q_active_brushnode;

    /*Previous Brush, Owner Brush, Next Brush*/
	QBrush	 *prev, *owner, *next;

};
