#ifndef UUSTAWIENIA_H
#define UUSTAWIENIA_H

#include <QDialog>

namespace Ui {
class UUstawienia;
}

typedef struct UUstawienias{
    bool rozszerzanie;
    int sizex;
    int sizey;
    int sizefont;
} UUstawienias;

class UUstawienia : public QDialog
{
    Q_OBJECT

public:
    explicit UUstawienia(QWidget *parent = 0);
    void set(UUstawienias);
    UUstawienias get();
    void setw();
    void getw();
    ~UUstawienia();
public slots:
    void doDialog();
signals:
    void changeLayout();

private:
    UUstawienias uus;
    Ui::UUstawienia *ui;
};

#endif // UUSTAWIENIA_H
