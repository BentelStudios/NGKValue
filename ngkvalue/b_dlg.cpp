#include "b_dlg.h"
#include <QDialog>

QWidget qBrushDialog;

static float _x;
static float _y;
static float _xsize;
static float _ysize;

int q_bdCode = 6373;
int q_bdRFlags = 2123;

BrushDialog * Create_Dialog(BrushDialog * dlg, QWidget& qBrushDialog){
  QWidget * qBrushDialogPtr;
  qBrushDialog.QDialog(qBrushDialog);
    qBrushDialogPtr->activateWindow(qBrushDialog.isWindow(qBrushDialog) == true);
    qBrushDialogPtr->DialogCode{ q_bdCode };
    qBrushDialogPtr->RenderFlags{ q_bdRFlags };

  return qBrushDialogPtr;
};
