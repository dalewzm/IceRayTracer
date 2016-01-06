#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QColor>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    bool openFile();
    bool setPixel(int x,int y, QColor pixelColor);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
