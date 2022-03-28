#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//--------------------------------------------//
#include <QApplication>
//放置讀取視窗標頭

#include "pokerthansize.h"//撲克牌( 比大小 )
#include "booom.h"


//--------------------------------------------//

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    //--------------------------------------------//
    //放置開啟視窗指令

    void on_pokerThanSize_clicked();

    void on_Booom_clicked();

    //--------------------------------------------//
    void setPage(int);

    void on_stop_clicked();

    void on_DOWN_clicked();

    void on_UP_clicked();

    void on_play_clicked();

    void on_back_clicked();

    void on_pageComboBox_currentIndexChanged(int index);


private:
    Ui::MainWindow *ui;

    static int pageNo;
    static int pageMAX;

    //--------------------------------------------//
    //放置初始視窗宣告

    pokerThanSize pokerThanSize;
    Booom Booom;

    //--------------------------------------------//
};
#endif // MAINWINDOW_H


/*

    UML_類圖_MainWindow
--------------------------------------------------------------------------------------------------------------------
-    pageNo     : static int;
-    pageMAX    : static int;
-    pokerThanSize  : class pokerThanSize;
-    *ui    : class MainWindow;
--------------------------------------------------------------------------------------------------------------------
+    MainWindow(QWidget *parent = nullptr);
+    ~MainWindow();

-    setPage(int): void;
-    on_stop_clicked()  : void;
-    on_DOWN_clicked()  : void;
-    on_UP_clicked()    : void;
-    on_play_clicked()  : void;
-    on_back_clicked()  : void;
-    on_pageComboBox_currentIndexChanged(int index) : void;
-    on_pokerThanSize_clicked() : void;
-    on_Booom_clicked() : void;
--------------------------------------------------------------------------------------------------------------------


*/

