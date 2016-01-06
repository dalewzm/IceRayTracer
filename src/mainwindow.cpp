#include<QFileDialog>
#include<QString>
#include<QPixmap>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->addAction(ui->actionOpen);

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::openFile()
{
    bool ret = false;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"),"./example/",tr("Scene file(*.scene)"));
    //need to update
    QPixmap bitmap(300,300);
    bitmap.fill(Qt::black);
    ui->resultLabel->setPixmap(bitmap);
    return ret;
}

 bool MainWindow::setPixel(int x,int y, QColor pixelColor)
 {
     bool ret = false;
     return ret;
 }
