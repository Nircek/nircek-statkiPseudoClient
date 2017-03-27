#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "statki.h"
#include "uustawienia.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void changedRefresh();
    void changedConnect();
    void everySecond();
    void showStatus(QString,int);
    void refresh();
    void changedLayout();
    void changeRozszerzanie(bool);
private:
    QTimer *timer;
    Ui::MainWindow *ui;
    statki *s;
    UUstawienia *uus;
};

#endif // MAINWINDOW_H
