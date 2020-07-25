#include "layout.h"
#include <QWidget>
#include "ecgdraw.h"
#include "qwidgetdraw.h"
#include <QLayout>
#include <QLabel>
#include<QLineEdit>
#include<QPushButton>
#include "socketdraw.h"
#include "tcpserver.h"
void Layout_s(QWidget *mainWin)
{
    mainWin->resize(800,480);
    mainWin->setWindowTitle("八组");

    QWidget *area_1 = new QWidget();
    QWidget *area_2 = new QWidget();
    QWidget *area_3 = new QWidget();
    QWidget *area_4 = new QWidget();


    QWidgetDraw *area_5 = new QWidgetDraw();
    QWidget *area_6 = new QWidget();
  //QWidgetDraw *area_7 = new QWidgetDraw();
    EcgDraw *area_7 = new EcgDraw();
//    socketdraw *area_6 =new socketdraw();


    QWidget *area_8 = new QWidget();
    QWidget *area_9 = new QWidget();
    QWidget *area_10 = new QWidget();
    QWidget *area_11 = new QWidget();
    QWidget *area_12 = new QWidget();
    QWidget *area_13 = new QWidget();
    QWidget *area_14 = new QWidget();
    QWidget *area_15 = new QWidget();
    QWidget *area_16 = new QWidget();
    QWidget *area_17 = new QWidget();
    area_1->setStyleSheet("background:gray");
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *Layout_1 = new QHBoxLayout();
    QVBoxLayout *Layout_2 = new QVBoxLayout();
    QVBoxLayout *Layout_3 = new QVBoxLayout();
    QHBoxLayout *Layout_4 = new QHBoxLayout();
    QHBoxLayout *Layout_5 = new QHBoxLayout();
    QHBoxLayout *Layout_6 = new QHBoxLayout();
    mainLayout->setMargin(8);
    mainLayout->addWidget(area_1);
    mainLayout->addWidget(area_2);

    Layout_1->addWidget(area_3);
    Layout_1->addWidget(area_4);
    Layout_1->setStretchFactor(area_3, 4);
    Layout_1->setStretchFactor(area_4, 2);
    Layout_1->setMargin(0);
    area_2 -> setLayout(Layout_1);

    area_5->setStyleSheet("background:black");
    Layout_2->addWidget(area_5);
    area_6->setStyleSheet("background:black");
    Layout_2->addWidget(area_6);

    area_7->setStyleSheet("background:black");
    Layout_2->addWidget(area_7);
    Layout_2->setMargin(0);
    area_3 -> setLayout(Layout_2);


    Layout_3->addWidget(area_8);
    area_9->setStyleSheet("background:black");
    Layout_3->addWidget(area_9);
    Layout_3->addWidget(area_10);
    Layout_3->addWidget(area_11);
    Layout_3->setMargin(0);
    area_4 -> setLayout(Layout_3);

    area_12->setStyleSheet("background:black");
    Layout_4->addWidget(area_12);
    area_13->setStyleSheet("background:black");
    Layout_4->addWidget(area_13);
    Layout_4->setMargin(0);
    area_8 -> setLayout(Layout_4);

    area_14->setStyleSheet("background:black");
    Layout_5->addWidget(area_14);
    area_15->setStyleSheet("background:black");
    Layout_5->addWidget(area_15);
    Layout_5->setMargin(0);
    area_10 -> setLayout(Layout_5);

    area_16->setStyleSheet("background:black");
    Layout_6->addWidget(area_16);
    area_17->setStyleSheet("background:black");
    Layout_6->addWidget(area_17);
    Layout_6->setMargin(0);
    area_11 -> setLayout(Layout_6);

    //添加标签
    QLabel *lbl1 = new QLabel(QWidget::tr("设备：8组医疗监护仪"));
    lbl1->setParent (area_1) ;
    lbl1->setGeometry(0,0,400,50) ;
    lbl1-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 30px") ;

    QLabel *lie1 = new QLabel(QWidget::tr("IP"));
    lie1->setParent (area_1) ;
    lie1->setGeometry(400,15,30,30) ;
    lie1-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;

    QLabel *lie2 = new QLabel(QWidget::tr("port"));
    lie2->setParent (area_1) ;
    lie2->setGeometry(550,15,50,30) ;
    lie2-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;

    QLineEdit *lie3 = new QLineEdit;
    lie3->setParent (area_1) ;
    lie3->setGeometry(430,15,100,30) ;
    lie3-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;

    QLineEdit *lie4 = new QLineEdit;
    lie4->setParent (area_1) ;
    lie4->setGeometry(600,15,100,30) ;
    lie4-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;


    QPushButton *pbt1 = new QPushButton (QWidget::tr("监听"));
    pbt1->setParent (area_1) ;
    pbt1->setGeometry(710,15,50,30) ;
    pbt1-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;


    QLabel *lbl2 = new QLabel(QWidget::tr("TRI"));
    lbl2->setParent (area_5) ;
    lbl2->setGeometry(0,0,50,30) ;
    lbl2-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;

    QLabel *lbl3 = new QLabel(QWidget::tr("RAN"));
    lbl3->setParent (area_6) ;
    lbl3->setGeometry(0,0,50,30) ;
    lbl3-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;

    QLabel *lbl4 = new QLabel(QWidget::tr("ECG"));
    lbl4->setParent (area_7) ;
    lbl4->setGeometry(0,0,50,30) ;
    lbl4-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 20px") ;

    QLabel *lbl5 = new QLabel(QWidget::tr("HR"));
    lbl5->setParent (area_12) ;
    lbl5->setGeometry(0,0,30,20) ;
    lbl5-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl12 = new QLabel(QWidget::tr("80"));
    lbl12->setParent (area_12) ;
    lbl12->setGeometry(30,20,100,60) ;
    lbl12-> setStyleSheet("color: rgb(18,237,14); font-family: Microsoft YaHei;font-size: 50px") ;
    QLabel *lbl13 = new QLabel(QWidget::tr("bpm"));
    lbl13->setParent (area_12) ;
    lbl13->setGeometry(90,20,40,20) ;
    lbl13-> setStyleSheet("color: rgb(18,237,14); font-family: Microsoft YaHei;font-size: 15px") ;

    QLabel *lbl6 = new QLabel(QWidget::tr("ST"));
    lbl6->setParent (area_13) ;
    lbl6->setGeometry(0,0,30,20) ;
    lbl6-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl14 = new QLabel(QWidget::tr("ST1 -?-"));
    lbl14->setParent (area_13) ;
    lbl14->setGeometry(30,18,100,20) ;
    lbl14-> setStyleSheet("color: rgb(18,237,14); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl15 = new QLabel(QWidget::tr("ST2 -?-"));
    lbl15->setParent (area_13) ;
    lbl15->setGeometry(30,48,100,20) ;
    lbl15-> setStyleSheet("color: rgb(18,237,14); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl16 = new QLabel(QWidget::tr("PVCs -?-"));
    lbl16->setParent (area_13) ;
    lbl16->setGeometry(20,78,100,20) ;
    lbl16-> setStyleSheet("color: rgb(18,237,14); font-family: Microsoft YaHei;font-size: 20px") ;

    QLabel *lbl7 = new QLabel(QWidget::tr("NIBP"));
    lbl7->setParent (area_9) ;
    lbl7->setGeometry(0,0,40,20) ;
    lbl7-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl17 = new QLabel(QWidget::tr("-?-"));
    lbl17->setParent (area_9) ;
    lbl17->setGeometry(20,50,30,20) ;
    lbl17-> setStyleSheet("color: rgb(77,127,222); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl18 = new QLabel(QWidget::tr("/-?-"));
    lbl18->setParent (area_9) ;
    lbl18->setGeometry(80,40,80,40) ;
    lbl18-> setStyleSheet("color: rgb(77,127,222); font-family: Microsoft YaHei;font-size: 40px") ;
    QLabel *lbl19 = new QLabel(QWidget::tr("00:00:00"));
    lbl19->setParent (area_9) ;
    lbl19->setGeometry(110,10,70,20) ;
    lbl19-> setStyleSheet("color: rgb(77,127,222); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl20 = new QLabel(QWidget::tr("-?-"));
    lbl20->setParent (area_9) ;
    lbl20->setGeometry(220,50,30,20) ;
    lbl20-> setStyleSheet("color: rgb(77,127,222); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl21 = new QLabel(QWidget::tr("mmHg"));
    lbl21->setParent (area_9) ;
    lbl21->setGeometry(205,10,70,20) ;
    lbl21-> setStyleSheet("color: rgb(77,127,222); font-family: Microsoft YaHei;font-size: 15px") ;


    QLabel *lbl8 = new QLabel(QWidget::tr("SpO2"));
    lbl8->setParent (area_14) ;
    lbl8->setGeometry(0,0,40,20) ;
    lbl8-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl22 = new QLabel(QWidget::tr("98"));
    lbl22->setParent (area_14) ;
    lbl22->setGeometry(40,20,80,40) ;
    lbl22-> setStyleSheet("color: rgb(238,62,8); font-family: Microsoft YaHei;font-size: 40px") ;
    QLabel *lbl23 = new QLabel(QWidget::tr("%"));
    lbl23->setParent (area_14) ;
    lbl23->setGeometry(110,20,20,20) ;
    lbl23-> setStyleSheet("color: rgb(238,62,8); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl24 = new QLabel(QWidget::tr("bpm"));
    lbl24->setParent (area_14) ;
    lbl24->setGeometry(90,70,60,20) ;
    lbl24-> setStyleSheet("color: rgb(238,62,8); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl25 = new QLabel(QWidget::tr("84"));
    lbl25->setParent (area_14) ;
    lbl25->setGeometry(50,60,40,30) ;
    lbl25-> setStyleSheet("color: rgb(238,62,8); font-family: Microsoft YaHei;font-size: 30px") ;

    QLabel *lbl9 = new QLabel(QWidget::tr("TEMP"));
    lbl9->setParent (area_15) ;
    lbl9->setGeometry(0,0,40,20) ;
    lbl9-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl26 = new QLabel(QWidget::tr("T1"));
    lbl26->setParent (area_15) ;
    lbl26->setGeometry(3,30,20,15) ;
    lbl26-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl27 = new QLabel(QWidget::tr("T2"));
    lbl27->setParent (area_15) ;
    lbl27->setGeometry(3,70,20,15) ;
    lbl27-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl28 = new QLabel(QWidget::tr("-?-"));
    lbl28->setParent (area_15) ;
    lbl28->setGeometry(28,28,50,20) ;
    lbl28-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl29 = new QLabel(QWidget::tr("-?-"));
    lbl29->setParent (area_15) ;
    lbl29->setGeometry(28,68,50,20) ;
    lbl29-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl30 = new QLabel(QWidget::tr("TD"));
    lbl30->setParent (area_15) ;
    lbl30->setGeometry(63,50,20,15) ;
    lbl30-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl31 = new QLabel(QWidget::tr("-?-"));
    lbl31->setParent (area_15) ;
    lbl31->setGeometry(88,48,50,20) ;
    lbl31-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 20px") ;
    QLabel *lbl40 = new QLabel(QWidget::tr("°C"));
    lbl40->setParent (area_15) ;
    lbl40->setGeometry(100,20,40,20) ;
    lbl40-> setStyleSheet("color: rgb(198,26,178); font-family: Microsoft YaHei;font-size: 15px") ;


    QLabel *lbl10 = new QLabel(QWidget::tr("RESP"));
    lbl10->setParent (area_16) ;
    lbl10->setGeometry(0,0,40,20) ;
    lbl10-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl32 = new QLabel(QWidget::tr("-?-"));
    lbl32->setParent (area_16) ;
    lbl32->setGeometry(20,20,100,60) ;
    lbl32-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 50px") ;
    QLabel *lbl33 = new QLabel(QWidget::tr("bpm"));
    lbl33->setParent (area_16) ;
    lbl33->setGeometry(90,20,40,20) ;
    lbl33-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 15px") ;

    QLabel *lbl11 = new QLabel(QWidget::tr("CO2"));
    lbl11->setParent (area_17) ;
    lbl11->setGeometry(0,0,40,20) ;
    lbl11-> setStyleSheet("color: white; font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl34 = new QLabel(QWidget::tr("-?-"));
    lbl34->setParent (area_17) ;
    lbl34->setGeometry(25,25,80,40) ;
    lbl34-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 40px") ;
    QLabel *lbl35 = new QLabel(QWidget::tr("mmHg"));
    lbl35->setParent (area_17) ;
    lbl35->setGeometry(75,10,70,20) ;
    lbl35-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 15px") ;
    QLabel *lbl36 = new QLabel(QWidget::tr("ins"));
    lbl36->setParent (area_17) ;
    lbl36->setGeometry(5,80,26,13) ;
    lbl36-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 13px") ;
    QLabel *lbl37 = new QLabel(QWidget::tr("-?-"));
    lbl37->setParent (area_17) ;
    lbl37->setGeometry(35,80,26,13) ;
    lbl37-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 13px") ;
    QLabel *lbl38 = new QLabel(QWidget::tr("awrr"));
    lbl38->setParent (area_17) ;
    lbl38->setGeometry(68,80,26,13) ;
    lbl38-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 13px") ;
    QLabel *lbl39 = new QLabel(QWidget::tr("-?-"));
    lbl39->setParent (area_17) ;
    lbl39->setGeometry(103,80,26,13) ;
    lbl39-> setStyleSheet("color: rgb(232,217,108); font-family: Microsoft YaHei;font-size: 13px") ;
    //结束
    area_1->setSizePolicy(QSizePolicy::Policy::Preferred,QSizePolicy::Policy::Preferred);
    area_2->setSizePolicy(QSizePolicy::Policy::Preferred,QSizePolicy::Policy::Preferred);
    mainLayout->setStretchFactor(area_1, 1);
    mainLayout->setStretchFactor(area_2, 9);
    mainWin->setLayout(mainLayout);
}
