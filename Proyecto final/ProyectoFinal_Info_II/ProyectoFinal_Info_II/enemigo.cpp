#include "enemigo.h"

enemigo::enemigo()
{

}
QRectF enemigo::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}

enemigo::enemigo(int x, int y, int an, int h)
{
    this->posx = x;
    this->posy = y;
    this->ancho = an;
    this->alto = h;

    setPos(posx,posy);

}

void enemigo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPixmap pxmap(":/new/persnj/Torre.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
        Q_UNUSED(option);
        Q_UNUSED(widget);

}



