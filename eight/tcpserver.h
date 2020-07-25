#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QDebug>
#include <QMessageBox>
#include <QMetaType>
#include <QString>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QTextBrowser>
#include "socketdraw.h"
#include "ecgdata1.h"
#include "layout.h"
#define SOCKETCLIENTBUFSIZE 1024
class TcpServer : public QWidget
        // 必须继承QWidget，否则无法使用connect
{
    Q_OBJECT
public:
    TcpServer(QWidget *parent = nullptr);
//    QLineEdit *lie3 ;
//    QLineEdit *lie4 ;
//    QPushButton *pbt1 ;


private slots:
    void acceptConnection(void);
    void readClient(void);
    void TcpServerListen();
    void TextBrowerClear();

private:
    QTcpServer* mQTcpServer;
    QTcpSocket* mSocketClient;
    QLineEdit *editId= nullptr;
    QLineEdit *editName= nullptr;
    QLineEdit *editSex= nullptr;

//    QLineEdit *lie3 = nullptr;
//    QLineEdit *lie4 = nullptr;
//    QPushButton *pbt1= nullptr;
    QPushButton *btnSendCmd = nullptr;
    QPushButton *btnClear= nullptr;
    QPushButton *btnSend= nullptr;
    QTextBrowser *msgBrowser= nullptr;
    socketdraw *test = nullptr;
    bool btnflags = 1;
};

#endif // TCPSERVER_H
