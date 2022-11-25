#ifndef SALIDA_H
#define SALIDA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class salida : public QGraphicsItem
{
    int posx;
    int posy;
    int ancho;
    int alto;

public:
        QRectF boundingRect() const;
        void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
        salida();
        salida(int x, int y, int an, int h);

};

#endif // SALIDA_H
