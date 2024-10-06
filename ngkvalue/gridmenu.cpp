/*
=======================================
     GRIDMENU.CPP GRID ITEMS LIST
=======================================
*/

#include "qgrid.h"
#include "QMenu.h"
#include "QtWidget.h"
#include "QString.h"

#define MOUSE_RIGHT_CLICK 111x111

typedef class QGridMenu{
public:

bool ClickedGrid(QGrid& qGrid, QMenu& GridMenu);
bool ClickedMenuItem(QMenu& GridMenu);

QString QGridMenuItem;
QIcon * qIcon = NULL;

enum QGridMenuItems{
  MISC_MODEL = 0,
  PREFAB_MODEL = 1,
  SCRIPT_MODEL = 2,
  PATH_NODE = 3,
  SCRIPT_NODE = 4,
  CROUCH_NODE = 5,
  COVER_NODE = 6,
  PEAK_NODE = 7,
  PRONE_NODE = 8,
  MANTLE_NODE = 9,
  WINDOW_NODE = 10,
  HINT_NODE = 11,
  INDICATOR_SCRIPT = 12,
  BSP_NODE = 13, 
  PORTAL_NODE = 14,
  REFLECTION_NODE = 15,
  LIGHT_NODE = 16,
  POINT_LIGHT_NODE = 17,
  SPOT_LIGHT_NODE = 18,
  VEHICLE_PATH_NODE = 19
  WIRE_BOX_NODE = 20,
  DAMAGE_INDICATOR_NODE = 21
};

void ConstructQGridMenu(QGridMenu& gridMenu, QGrid * qGrid, QMenu * GridMenu){
  GridMenu(QWidget * QGridPanel == QGrid);
  GridMenu(const QString& qGridMenuTitle);
};

void GridItems(){
QString Misc_Model;
QString Prefab_Model;
QString Script_Model;
QString Crouch_Node;
QString Cover_Node;
QString Peak_Node;
QString Prone_Node;
QString Mantle_Node;
QString Window_Node;
QString Hint_Node;
QString Indicator_Script;
QString Bsp_Node;
QString Portal_Node;
QString Reflection_Node;
QString Light_Node;
QString Point_Light_Node;
QString Spot_Light_Node;
QString Vehicle_Path_Node;
QString Wire_Box_Node;
QString Damage_Indicator_Node;
};

virtual void ConstructQGridItems(QGridMenu& gridMenu, QGrid * qGrid, QMenu& GridMenu){
  QAction qMenuAction;
  QMenuAction.insertMenu(before->qGrid, menu->GridMenu);
  GridMenu.isEmpty(false)const;
  qMenuAction.insertSection(before->qGrid, text->QGridMenuItem);
  GridMenu.popup(NULL);
};

  void PopupQGridMenu(QGridMenu& gridMenu, QMenu& QGridMenuItem){
  if(gridMenu.ClickedGrid(gridMenu) == true){
    gridMenu.ConstructQGridMenu(gridMenu);
    gridMenu.ConstructQGridItems(gridMenu);
    QGridMenuItems.popup(gridMenu.GridItems(QGridMenuItems));

       return true;
   }
  
  };

  void AddItemToQGrid(QGridMenu& gridMenu, QString& GridItemString, QGrid& qGrid){
    if(gridMenu.ClickedMenuItem(gridMenu) == true)
    {
      GridItemString.append(str = QGridMenuItem(GridItemString));
      QGridMenuItem = gridMenu.GridItems(gridMenu);
      qGrid.qGetGridMatrix(qGrid, GridItemString.GridItems(GridItemString));
          Sys_printf("%s", "QGridMenu" gridMenu.GridItems(gridMenu));

         return true;
    }
    
  };

};

