/*
    *Copyright (c) 2019 BHL-Studio
    * The headder of main widget backend defines
*/




#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>


namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void slotAboutQt();                // slot which showing info about Qt
    void slotAboutUs();                // slot which showing info about BHL-Studio
    void slotChangeTextFont();    // gets and set new text font
};



#endif // MAINWINDOW_H
