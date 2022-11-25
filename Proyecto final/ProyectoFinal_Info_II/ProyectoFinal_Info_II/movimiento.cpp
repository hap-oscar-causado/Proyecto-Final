#include "movimiento.h"


QRectF Movimiento::boundingRect() const
{
    return QRectF(0,0,2*r,2*r);
}

void Movimiento::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pxmap(":/new/persnj/Flecha Izquierda.png");
    painter->drawPixmap(boundingRect(),pxmap,pxmap.rect());

}
double Movimiento::getPosx() const
{
    return posx;
}

double Movimiento::getPosy() const
{
    return posy;
}

Movimiento::Movimiento()
{

}

Movimiento::Movimiento(double x, double y, double ang, double v)
{
    this->posx=x;
    this->posy=y;
    this->angulo=ang;
    this->velocidad=v;
     setPos(posx, posy);
}

void Movimiento::CalcularPosicion()
{
    posx-=velx*tiempo;
    posy+=2;
    setPos(posx,posy);
}

void Movimiento::CalcularVelocidad()
{
    velx=velocidad*cos(angulo);
    vely=velocidad*sin(angulo)-9.8*tiempo;
}

void Movimiento::ActualizarVelocidad()
{
   velocidad=sqrt((velx*velx)+(vely*vely));
   angulo=atan2(vely,velx);
}
