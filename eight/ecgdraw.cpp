#include "ecgdraw.h"
#include <QPaintEvent>
#include <QPainter>
#include "ecgdata.h"
EcgDraw::EcgDraw(QWidget *parent) : QWidget(parent)
{
    this->resize(1728,480);

    pixmap = new QPixmap(this->width(), this->height());
    timer = new QTimer(parent);
    connect(timer, &QTimer::timeout, this, EcgDraw::refresh);
    timer->start(4);
}

void EcgDraw::refresh()
{
    drawPixmap();
    this->update();
}

void EcgDraw::paintEvent(QPaintEvent *event)
{
    drawWidget();
}

void EcgDraw::drawWidget()
{
    QPainter *painter = new QPainter();

    painter->begin(this);
    painter->drawPixmap(0,0,*pixmap);

    painter->end();
}

void EcgDraw::drawPixmap()
{
    QPainter *painter = new QPainter();

    painter->begin(pixmap);

    this->drawData(painter);

    painter->end();
}

void EcgDraw::drawData(QPainter *painter)
{
    painter->setPen(QPen(Qt::red,2,Qt::DashLine,Qt::RoundCap));

    int height = this->height();
    int width = this->width();
    temp = temp + 2;
    pointX = pointX + 1;
    painter->save();
    painter->setPen(QPen(Qt::black,8));
    painter->drawRect(pointX+4,0,1,height);
    painter->restore();
    painter->drawLine(QPoint(pointX,height/1.1 - (ecgWave[(temp)%500]-1900)/950*height),QPoint(pointX+1,height/1.1 - (ecgWave[((temp+2))%500]-1900)/950*height));
    if(pointX > width-4)
    {
        pointX = 0;
    }
    if(temp >= 2500)
    {
        temp = 0;
    }
}
