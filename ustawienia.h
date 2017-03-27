#ifndef USTAWIENIA_H
#define USTAWIENIA_H

#include <QDialog>

namespace Ui {
class ustawienia;
}
typedef struct ustawienias{
    QString adress;
    int port;
    int refresh;
    int fps;
    int ms;
} ustawienias;
class ustawienia : public QDialog
{
    Q_OBJECT

public:
    explicit ustawienia(QWidget *parent = 0);
    ~ustawienia();
    void set(ustawienias);
    ustawienias get();
    int fps2ms(int);
signals:
    void showStatus(QString);

private:
    Ui::ustawienia *ui;
};

#endif // USTAWIENIA_H
