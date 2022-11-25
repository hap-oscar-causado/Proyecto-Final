#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QGraphicsItem>
#include <QPainter>

class enemigo : public QGraphicsItem
{
    int ancho;
    int alto;
public:
    int posx;
    int posy;
    enemigo();
    QRectF boundingRect() const;
    void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    enemigo(int x, int y, int an, int h);
};


#endif // ENEMIGO_H
