#include "ustawienia.h"
#include "ui_ustawienia.h"

ustawienia::ustawienia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ustawienia)
{
    ui->setupUi(this);

}
ustawienia::~ustawienia()
{
    delete ui;
}
void ustawienia::set(ustawienias u){
    ui->adress->setText(u.adress);
    ui->port->setValue(u.port);
    ui->refresh->setValue(u.refresh);
    ui->fps->setCurrentIndex(u.fps);
}
ustawienias ustawienia::get(){
    ustawienias u;
    u.adress=ui->adress->text();
    u.port=ui->port->value();
    u.refresh=ui->refresh->value();
    u.fps=ui->fps->currentIndex();
    u.ms=fps2ms(u.fps);
    return u;
}

int ustawienia::fps2ms(int i){
    int fpsmst[13]={2000,1000,500,250,200,125,100,50,30,25,20,15,10};
    return fpsmst[i];
}
