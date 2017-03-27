#ifndef STATKI_H
#define STATKI_H

#include <QObject>
#include "qtppspc/qtppspc.h"

class statki : public QObject
{
    Q_OBJECT
public:
    statki(QWidget *parent=0);
    ~statki();
private:
    QString adress;
    int port;
    int refresh;
    bool connected;
    int fps;
    int ms;
public slots:
    void doUstawieniaDialog();
    void doCreateRoomDialog();
signals:
    void changeRefresh();
    void changeConnect();
    void showStatus(QString,int=2000);
public slots:
    void connect();
    void disconnect();
    void showStatuss(QString,int=0);
public:
    QString gAdress();
    int     gPort();
    int     gRefresh();
    bool    gConnected();
    int     gFps();
    int     gMs();

    void pushAction(int id);
    void refresh();


};

#endif // STATKI_H
