#ifndef SOCKETDRAW_H
#define SOCKETDRAW_H
#include <QWidget>
#include <QTimer>
#include "ecgdata1.h"

class socketdraw : public QWidget
{
public:
    QTimer *timer;
    QPixmap *pixmap;
    int pointX = 0;
    int pointY = 0;
    int temp = 0;
    explicit socketdraw(QWidget *parent = nullptr);
    void drawPixmap();
    void refresh();
    void drawWidget(void);
    void erase();
private:
    void paintEvent(QPaintEvent *event) override;

    //void drawPixmap(int ecgdata,int lastdata);
    //void drawWidget(void);
    void drawData(QPainter *painter);
};

#endif // SOCKETDRAW_H
