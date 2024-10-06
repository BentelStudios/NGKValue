#include "b_dlg.h"
#include <QDialog>
#include <QString>
#include <QPushButton>

QWidget qBrushDialog;

static float _x;
static float _y;
static float _xsize;
static float _ysize;

int q_bdCode = 6373;
int q_bdRFlags = 2123;

QString q_bdTitle = "Brush Inspector";

BrushDialog * Create_Dialog(BrushDialog * dlg, QWidget& qBrushDialog){
  QWidget * qBrushDialogGlobal;
  qBrushDialog.QDialog(qBrushDialog);
    qBrushDialogGlobal->activateWindow(qBrushDialog.isWindow(qBrushDialog) == true);
    qBrushDialogGlobal->DialogCode{ q_bdCode };
    qBrushDialogGlobal->RenderFlags{ q_bdRFlags };

  return qBrushDialogPtr;
  
};

BrushDialog * Dialog_Items(BrushDialog * dlg, QWidget& qBrushDialog, QPushButton& qGlobalButton){
  QWidget * qBrushDialogGlobal;
  qBrushDialogGlobal->windowTitle(q_bdTitle);
    qGlobalButton.QPushButton(text = "Fit", parent = qBrushDialog(qGlobalButton));
      qGlobalButton.setFlat(qGlobalButton) == true;
      qGlobalButton.hitButton(false);
};
