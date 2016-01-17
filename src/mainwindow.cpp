#include<QFileDialog>
#include<QString>
#include<QPixmap>
#include <QImage>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->addAction(ui->actionOpen);
    viewControllerPtr = new RenderViewController();
    labelImg = new QImage(ui->resultLabel->width(),ui->resultLabel->height(),QImage::Format_ARGB32);
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(viewControllerPtr)
        delete viewControllerPtr;
    if(labelImg)
        delete labelImg;
}


void MainWindow::setupConnections()
{
    connect( viewControllerPtr,SIGNAL(notifyGetPixel(int ,int ,QColor)),
            this,SLOT(setPixel(int ,int ,QColor )));
}

bool MainWindow::openFile()
{
    bool ret = false;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"),"./example/",tr("Scene file(*.scene)"));
    //need to update

    qDebug()<<labelImg->width()<<" , "<<labelImg->height()<<"\n";
    *labelImg = labelImg->scaled(300,300);
    qDebug()<<labelImg->width()<<" , "<<labelImg->height()<<"\n";
    labelImg->fill(Qt::white);
    ui->resultLabel->resize(300,300);
    ui->resultLabel->setPixmap(QPixmap::fromImage(*labelImg));
    ret = true;
    return ret;
}

 bool MainWindow::setPixel(int x,int y, QColor pixelColor)
 {
     bool ret = false;
     labelImg->setPixel(x,y,pixelColor.rgba());
     ui->resultLabel->setPixmap(QPixmap::fromImage(*labelImg));
     ret = true;
     return ret;
 }

 bool MainWindow::adjustLabelSize()
 {
     //need to do
    return true;
 }

 bool MainWindow::renderScene()
 {
     //qDebug() <<"IN main thread"<< QThread::currentThreadId();
      viewControllerPtr->renderScene();
      return true;
 }
