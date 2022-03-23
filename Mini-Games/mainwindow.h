#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//--------------------------------------------//
#include <QApplication>
//��mŪ���������Y

#include "pokerthansize.h"//���J�P( ��j�p )
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
    static int pageNo;
    static int pageMAX;

    void setPage(int);
//--------------------------------------------//
//��m��l�����ŧi

    pokerThanSize pokerThanSize;
    Booom Booom;

//--------------------------------------------//
private slots:
    void on_stop_clicked();

    void on_DOWN_clicked();

    void on_UP_clicked();

    void on_play_clicked();

    void on_back_clicked();

    void on_pageComboBox_currentIndexChanged(int index);
//--------------------------------------------//
//��m�}�ҵ������O

    void on_pokerThanSize_clicked();

    void on_Booom_clicked();

//--------------------------------------------//


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


/*

    UML_����_MainWindow
--------------------------------------------------------------------------------------------------------------------
-    pageNo     : static int;
-    pageMAX    : static int;
-    pokerThanSize  : class pokerThanSize;

+    *ui    : class MainWindow;
--------------------------------------------------------------------------------------------------------------------
-    MainWindow(QWidget *parent = nullptr);
-    ~MainWindow();
-    setPage(int): void;

+    on_stop_clicked()  : void;
+    on_DOWN_clicked()  : void;
+    on_UP_clicked()    : void;
+    on_play_clicked()  : void;
+    on_back_clicked()  : void;
+    on_pageComboBox_currentIndexChanged(int index) : void;
+    on_pokerThanSize_clicked() : void;
+    on_Booom_clicked() : void;

*/

