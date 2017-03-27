# QTPPSPC
###### Qt Pseudo PHP Server's Pseudo Client
### Example
```c++
#include "qtppspc.h"

using namespace GitHub::Nircek;
int main(int argc, char *argv[])
{
    QApplication qapp(argc,argv);
    qtppspc pc("http://localhost","admin","admin",&qapp);
    PPSReply rep=pc.push("everything");
    qDebug()<<readPPSReplyType(rep.replyType)<<' '<<rep.reply.toUtf8()<<'\n';
    rep=pc.refresh();
    qDebug()<<readPPSReplyType(rep.replyType)<<' '<<rep.reply.toUtf8()<<'\n';
    return 0;
}

```
