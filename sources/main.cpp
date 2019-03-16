/*
    *Copyright (c) 2019 BHL-Studio
    * The main file of project (entry point)
*/




#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    MainWindow startWindow;
    startWindow.showMaximized();

    return application.exec();
}
