#include "statki.h"
#include "ustawienia.h"


statki::statki(QWidget *parent):
    QObject(parent){
    adress="";
    port=0xFACE;
    refresh=10.0;
    fps=2;
    ms=1000;
    connected=false;
}

QString statki::gAdress(){return adress;}
int     statki::gPort(){return port;}
int     statki::gRefresh(){return refresh;}
bool    statki::gConnected(){return connected;}
int     statki::gFps(){return fps;}
int     statki::gMs(){return ms;}

void statki::doUstawieniaDialog(){
    ustawienias us;
    us.adress=adress;
    us.port=port;
    us.refresh=refresh;
    us.fps=fps;
    us.ms=ms;
    ustawienia u;
    QObject::connect(&u,SIGNAL(showStatus(QString)),this,SLOT(showStatuss(QString)));
    u.set(us);
    if(u.exec()==QDialog::Accepted){
        us=u.get();
        if((adress!=us.adress)||(port!=us.port)){
            adress=us.adress;
            port=us.port;
            disconnect();
        }
        if((us.refresh!=refresh)||(ms!=us.ms)){
            refresh=us.refresh;
            fps=us.fps;
            ms=us.ms;
            emit changeRefresh();
        }
    }
}
void statki::showStatuss(QString t, int i){
    emit showStatus(t,i);
}

statki::~statki(){}
void statki::connect(){
    connected=true;
    emit changeConnect();
    emit showStatus("Połączono z serwerem");
}
void statki::disconnect(){
    connected=false;
    emit changeConnect();
    emit showStatus("Rozłączono z serwerem");
}
void statki::getstatus(){
    emit showStatus("Pobrano status");
}


void statki::getroomlist(){

}

void statki::createroom(){

}

void statki::joinroom(){

}

void statki::sendAction(int x,int y){

}

void statki::refreshmap(){

}






























