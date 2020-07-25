#ifndef WIDGETDRAW_EXTRA_H
#define WIDGETDRAW_EXTRA_H
#include <QWidget>
#include <QTimer>

class EcgDraw : public QWidget
{
public:
    QTimer *timer;
    QPixmap *pixmap;
    int pointX = 0;
    int pointY = 0;
    int temp = 0;
    explicit EcgDraw(QWidget *parent = nullptr);
private:
    void paintEvent(QPaintEvent *event) override;
    void refresh();
    void drawPixmap();
    void drawWidget(void);
    void drawData(QPainter *painter);
};

#endif // WIDGETDRAW_EXTRA_H
