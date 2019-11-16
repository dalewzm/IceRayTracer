#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
class RenderViewController;
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
    bool renderScene();
    bool adjustLabelSize();
    bool setPixel(int x,int y, QColor pixelColor);
private:
    void setupConnections();
private:
    Ui::MainWindow *ui;
    RenderViewController *viewControllerPtr;
    QImage *labelImg;
};

#endif // MAINWINDOW_H
