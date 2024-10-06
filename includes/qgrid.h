/*---QGRID-2D-DRAWING-GRID---*/
#pragma once
#ifndef QGRID_H
#define QGRID_H

#endif

#define GRID_POWER_16 16
#define GRID_POWER_32 32
#define GRID_POWER_64 64
#define GRID_POWER_128 128

typedef class QGrid{

QGrid();
virtual ~QGrid();

int q_nGrid = 0;

static int q_nGridSpawnflags = 248;

bool EnableGrid(QGrid);

static int q_nGridRows;
static int q_nGridColumns;

int q_nGridMins[16];
int q_nGridMax[128];

bool Add_EntityToGrid();

enum QGridViewType{
  GRID_XY_VIEW = 0,
  GRID_ZY = 1,
  GRID_ZX = 2
};

bool SwapGridView(QGrid * qGridView);

virtual void qGridBackgroundColor(static int PFD_RGB_COLOR, QGrid * grid);
virtual void qGridSwapView(QGrid& qGridSwap);//call bool SwapGridView
void qConstructGridLines(QGrid * qMinsOrMax, static int q_nOfficalRows, static int q_nOfficalColumns);
const void ShowLines(QGrid& qGridLines)const;
const void ShowBackground(QGrid& qGridBackground)const;

bool qGridZoomIn(QGrid, double qGridZoom);
bool qGridZoomOut(QGrid, double qGridZoom);

enum QGridViewMode{
GRID_WIREFRAME_MODE = 0,
GRID_SOLID_MODE = 1,
GRID_ENTITY_MODE = 2
};

bool q_nEnableGridBrushDrawingPen(QGrid& qgridpen);//enables grid pen drawing to create brushes

#define QMOUSEBINDINGLEFTCLICK 32

static int qMouseBindingLeftClick = 32;
static int qGridKeyMouseBinding = 32;

virtual void qGetGridMatrix(QGrid);

};
