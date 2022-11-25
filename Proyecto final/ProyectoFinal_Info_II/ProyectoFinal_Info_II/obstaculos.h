#ifndef OBSTACULOS_H
#define OBSTACULOS_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class obstaculos : public QGraphicsItem
{   int posx;
    int posy;
    int ancho;
    int alto;
    int sprite;

public:
    QRectF boundingRect() const;
    void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    obstaculos();
    obstaculos(int x, int y, int an, int h, int);
    int Obstaculo();
};



#endif // OBSTACULOS_H
