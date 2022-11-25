#include "obstaculos.h"

QRectF obstaculos::boundingRect() const
{
    return QRectF(posx,posy,ancho,alto);
}
obstaculos::obstaculos()
{

}

obstaculos::obstaculos(int x, int y, int an, int h, int sprite)
{
    this->posx = x;
    this->posy = y;
    this->ancho = an;
    this->alto = h;
    this->sprite = sprite;
    setPos(posx,posy);

}

void obstaculos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    if (Obstaculo() == 0){  //pasto
        QPixmap pxmap(":/new/persnj/Styles/Obstaculos/Pasto.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if (Obstaculo() == 1){  //flor
        QPixmap pxmap(":/new/persnj/Styles/Obstaculos/Flor.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if (Obstaculo() == 2){  //tronco
        QPixmap pxmap(":/new/persnj/Styles/Obstaculos/Tronco.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if (Obstaculo() == 3){  //roca
        QPixmap pxmap(":/new/persnj/Styles/Obstaculos/Roca.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if (Obstaculo() == 4){  // tronco doble
        QPixmap pxmap(":/new/persnj/Styles/Obstaculos/Troncos.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }

}

int obstaculos::Obstaculo(){
    return sprite;
}
