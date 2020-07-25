#include "tcpserver.h"
#include "layout.h"


TcpServer::TcpServer(QWidget *parent) : QWidget(parent)
{
    this->editId=new QLineEdit(this);
    this->editId->resize(100,25);
    this->editId->move(70,20);

    this->editName=new QLineEdit(this);
    this->editName->resize(70,25);
    this->editName->move(230,20);

    this->btnSendCmd=new QPushButton(this);
    this->btnSendCmd->move(320,15);
    this->btnSendCmd->setText("监听");

    this->btnClear = new QPushButton(this);
    this->btnClear->move(450,15);
    this->btnClear->setText("清除");

    QLabel *textName = new QLabel(this);
    textName->setText("Port");
    textName->resize(100,25);
    textName->move(180,20);
    QLabel *textId = new QLabel(this);
    textId->setText("IP");
    textId->resize(50,25);
    textId->move(40,20);

    test = new socketdraw();
    test->resize(600,380);
    test->move(50,70);

    connect(this->btnSendCmd,&QPushButton::clicked,this,TcpServer::TcpServerListen);

}

void TcpServer::TcpServerListen()
{
    if(btnflags)
    {
        mQTcpServer = new QTcpServer(); // 构造QTcpServer
        if(mQTcpServer->listen(QHostAddress(this->editId->text()), this->editName->text().toInt()))// 监听本机port端口
        {
            connect(mQTcpServer, SIGNAL(newConnection()), this, SLOT(acceptConnection()));

            qDebug()<<"Server is listening on "<<QString::number(this->editName->text().toInt());

            this->btnSendCmd->setText("停止");
            btnflags = 0;
        }
        else
        {
            QMessageBox::critical(this,"QTCPServer",QString("Unable to start the server: %1.").arg(mQTcpServer->errorString())); // 报错
            mQTcpServer->close();

        }
    }
    else
    {
        mQTcpServer->close();
        delete mQTcpServer;
        mQTcpServer = nullptr;
        this->btnSendCmd->setText("监听");
        btnflags = 1;
    }
}

void TcpServer::acceptConnection(void)
{
    mSocketClient = mQTcpServer->nextPendingConnection();
    connect(mSocketClient, SIGNAL(readyRead()), this, SLOT(readClient()));
}

void TcpServer::readClient()
{

    QByteArray rxbuf = mSocketClient->readAll(); // 取出客户Client中的所有数据
    bool ok;
    lastdata = ecgdata1;
    ecgdata1 = rxbuf.toFloat(&ok);
    test ->refresh();
}

void TcpServer::TextBrowerClear()
{
    lastdata = 0;
    ecgdata1 = 0;
    test->erase();
}
