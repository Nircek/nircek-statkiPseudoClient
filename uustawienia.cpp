#include "uustawienia.h"
#include "ui_uustawienia.h"

UUstawienia::UUstawienia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UUstawienia)
{
    uus.rozszerzanie=false;
    uus.sizefont=11;
    uus.sizex=50;
    uus.sizey=50;
    ui->setupUi(this);
    setw();
}

UUstawienia::~UUstawienia()
{
    delete ui;
}
void UUstawienia::set(UUstawienias u){
    uus=u;
    emit changeLayout();
}

UUstawienias UUstawienia::get(){
    return uus;
}
void UUstawienia::setw(){
    ui->rozszerzanie->setChecked(uus.rozszerzanie);
    ui->sizefont->setValue(uus.sizefont);
    ui->sizex->setValue(uus.sizex);
    ui->sizey->setValue(uus.sizey);
}

void UUstawienia::getw(){
    uus.rozszerzanie=ui->rozszerzanie->checkState();
    uus.sizefont=ui->sizefont->value();
    uus.sizex=ui->sizex->value();
    uus.sizey=ui->sizey->value();
}

void UUstawienia::doDialog(){
    setw();
    if(this->exec()){
        getw();
        emit changeLayout();
    }

}
