#include "mainwindow.h"
#include "ui.cpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    s(new statki()),
    uus(new UUstawienia())
{
    ui->setupUi(this);
    connect(ui->actionUstawienia,   SIGNAL(triggered()),                s,      SLOT(doUstawieniaDialog()));
    connect(ui->actionPo_cz,        SIGNAL(triggered()),                s,      SLOT(connect()));
    connect(ui->actionRoz_cz,       SIGNAL(triggered()),                s,      SLOT(disconnect()));

    connect(ui->actionUUstawienia,  SIGNAL(triggered(bool)),            uus,    SLOT(doDialog()));
    connect(ui->actionRozszerzanie, SIGNAL(triggered(bool)),            this,   SLOT(changeRozszerzanie(bool)));

    connect(ui->actionWyj_cie,      SIGNAL(triggered()),                this,   SLOT(close()));

    connect(ui->refresh,            SIGNAL(clicked()),                  this,   SLOT(refresh()));

    connect(s,                      SIGNAL(changeRefresh()),            this,   SLOT(changedRefresh()));
    connect(s,                      SIGNAL(changeConnect()),            this,   SLOT(changedConnect()));
    connect(s,                      SIGNAL(showStatus(QString,int)),    this,   SLOT(showStatus(QString,int)));

    connect(uus,                    SIGNAL(changeLayout()),             this,   SLOT(changedLayout()));

    timer = new QTimer(this);
    connect(timer,                  SIGNAL(timeout()),                  this,   SLOT(everySecond()));
    changedConnect();
    changedRefresh();
    everySecond();
    changedLayout();
    showStatus("█Witaj w skromnych statkach!",5000);
}
void MainWindow::changeRozszerzanie(bool rozszerzanie){
    UUstawienias us=uus->get();
    us.rozszerzanie=rozszerzanie;
    uus->set(us);
}

void MainWindow::changedLayout(){
    UUstawienias us=uus->get();
    for(size_t i=0;i<200;++i){
        QFont font=ui->statki[i]->font();
        font.setPixelSize(us.sizefont);
        ui->statki[i]->setFont(font);
        ui->statki[i]->setMinimumSize(QSize(us.sizex,us.sizey));
        if(us.rozszerzanie)ui->statki[i]->setMaximumSize(QSize(16777215, 16777215));
        else ui->statki[i]->setMaximumSize(QSize(us.sizex,us.sizey));
    }
}

void MainWindow::refresh(){
    if(s->gConnected()){
        s->getstatus();
        ui->progressBar->setValue(0);
    }
}

void MainWindow::changedRefresh(){
    ui->progressBar->setValue(0);
    ui->progressBar->setMaximum((s->gRefresh()*(2*1000/s->gMs()))/2);
    if((s->gRefresh()==1)&&s->gConnected())ui->progressBar->setMaximum(0);
    else changedConnect();
}
void MainWindow::changedConnect(){
    ui->actionPo_cz->setEnabled(!s->gConnected());
    ui->actionRoz_cz->setEnabled(s->gConnected());
    if(s->gConnected()){
        timer->stop();
        ui->progressBar->setValue(0);
        timer->start(s->gMs());
        if(ui->progressBar->maximum()==1){ui->progressBar->setMaximum(0);timer->stop();timer->start(1000);};
    }else{
        timer->stop();
        ui->progressBar->setValue(0);
        if(ui->progressBar->maximum()==0)ui->progressBar->setMaximum(1);
    }
}
void MainWindow::everySecond(){
    if(s->gConnected()){
        ui->progressBar->setValue(ui->progressBar->value()+1);
        if(ui->progressBar->value()>=ui->progressBar->maximum()){
            ui->progressBar->setValue(0);
            s->getstatus();
        }
    }
}
void MainWindow::showStatus(QString s,int t){
    ui->statusBar->showMessage(s,t);
}

MainWindow::~MainWindow()
{
    delete s;
    delete ui;
}
