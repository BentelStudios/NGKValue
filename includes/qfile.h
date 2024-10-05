/*
====================================================
	QFILE.H HANDLING FILES IN NGKVALUE
====================================================
*/
#pragma once

#ifndef QFILE_H
#define QFILE_H

#endif

#define DEBUG_QFILE 0x0

/*---includes---*/
#include <string>
#include <cstdlib>

typedef struct QFile {
public:

	typedef std::string QSys_String;
	typedef void QSys_printf;
	typedef bool qbool;

	QFile( );
	~QFile( );

	virtual void QSys_printf( );/*---acts as a printf fucntion---*/
	virtual void QSys_Openfile( QFile * owner, const char * qFileName );
	virtual void QSys_Savefile( QFile * current, const char * qFileName );

		qbool QSave_File( );

		int QFileDataSize;

		virtual void QSys_StoreMemory( const char * qFileName, size_t QMemorySize );

		enum QFileType {
			QMap = 0,
			QModel = 1,
			QBrush = 2,
			QShader = 3,
			QText = 4
		};

			/*---calls a qfile type---*/	
			int QFile_PrintType;

			virtual void QFlush( );

};
