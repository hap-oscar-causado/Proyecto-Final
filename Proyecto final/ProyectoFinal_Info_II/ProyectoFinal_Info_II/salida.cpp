#include "salida.h"

salida::salida()
{

}

QRectF salida::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}


salida::salida(int x, int y, int an, int h)
{
    this->posx = x;
    this->posy = y;
    this->ancho = an;
    this->alto = h;

    setPos(posx,posy);
}

void salida::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pxmap(":/new/persnj/Salida.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
}
