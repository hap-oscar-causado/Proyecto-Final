#include "charcos_de_muerte.h"

charcos_de_muerte::charcos_de_muerte()
{

}

charcos_de_muerte::charcos_de_muerte(int x, int y, int an, int h, int sprite)
{
    this->posx = x;
    this->posy = y;
    this->ancho = an;
    this->alto = h;
    this->sprite = sprite;
    setPos(posx,posy);

}

QRectF charcos_de_muerte::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}

void charcos_de_muerte::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{   int a=numero_charco();
    if(a==0){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm_skull.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==1){
        QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm1.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==2){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm2.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==3){
        QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm3.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==4){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm4.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==5){
        QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm5.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==6){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm6.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==7){
        QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm7.png");
        painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==8){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm8.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }
    if(a==9){
    QPixmap pxmap(":/new/persnj/Styles/Monstruos/Objetos/cm9.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());
    }


}

int charcos_de_muerte::numero_charco()
{
    return sprite;
}
