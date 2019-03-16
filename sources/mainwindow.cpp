/*
    *Copyright (c) 2019 BHL-Studio
    *The realisation of main widget class
*/




#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFontDialog>



// CONSTRUCT AND DESTRUCT -----------------------------------------------------------------
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    // UI setup
    ui->setupUi(this);
    ui->statusBar->showMessage(QString("Setting up... Loading modules..."), 3700);


    // connections
    QObject::connect(
                                ui->actionAboutQt,            SIGNAL(triggered(bool)),
                                this,                                   SLOT(slotAboutQt())
                                );

    QObject::connect(
                                ui->actionAboutUs_2,        SIGNAL(triggered(bool)),
                                this,                                   SLOT(slotAboutUs())
                                );

    QObject::connect(
                                ui->actionAboutUs,             SIGNAL(triggered(bool)),
                                this,                                   SLOT(slotAboutUs())
                                );

    QObject::connect(
                                ui->actionChangeTextFont, SIGNAL(triggered(bool)),
                                this,                                    SLOT(slotChangeTextFont())
                                );

return; }



MainWindow::~MainWindow() {
    // setdown
    delete ui;
    return;
}
// end of CONSTRUCT AND DESTRUCT ______________________________________




// SLOTS --------------------------------------------------------------------------------------------
void MainWindow::slotAboutQt() {
    QMessageBox::aboutQt(this, "Help window about Qt - framework which we use to create GUI.");
    return;
}



void MainWindow::slotAboutUs() {
    QMessageBox::information(this, "About us", "About uuuuuuuus here", 0, 0);
    return;
}



void MainWindow::slotChangeTextFont() {
    ui->plainTextEdit->setFont(QFontDialog::getFont(0));
}

// end of SLOTS ________________________________________________________
