#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include "qwidgetdraw.h"
#include <QPainter>
#include <ecgdraw.h>
#include "layout.h"
#include "tcpserver.h"
#include "socketdraw.h"

int main(int argc, char * argv[])
{
    QApplication a(argc, argv);

    QWidget *widgetDraw = new QWidget;
    Layout_s(widgetDraw);
    widgetDraw->setMaximumSize(1920,1080);

//    TcpServer *drawsocket = new TcpServer(widgetDraw);
//    drawsocket->resize(600,400);
//    drawsocket->setGeometry(400,900,100,30) ;
    widgetDraw->show();

    TcpServer *mTcpServer = new TcpServer();
    mTcpServer->setWindowTitle("第八组郭为进2017080307");
    mTcpServer->show();

    return a.exec();
}
