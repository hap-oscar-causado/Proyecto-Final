#include "personaje.h"
#include <QMessageBox>

personaje::personaje(int x, int y, int an, int h):
    ancho(an), alto(h), posx(x), posy(y)
{
    this->velocidad = 2;

    sprite = QPixmap(":/new/persnj/Lily1.0esp.png");
    fila = 155;
    columna = 0;
    tempFrame = 0;

    setPos(posx,posy);
}

QRectF personaje::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}

void personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(0, 0, sprite, columna, fila, ancho, alto);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void personaje::nuevaDireccion(Direccion d)
{
    direccion = d;
    cambiarFila();
}

void personaje::mover()
{
    if(direccion == Direccion::Arriba){ posy -= velocidad; }
    else if(direccion == Direccion::Abajo){ posy += velocidad; }
    else if(direccion == Direccion::Derecha){ posx += velocidad; }
    else if(direccion == Direccion::Izquierda){ posx -= velocidad; }

    setPos(posx, posy);
    if(tempFrame >= 4){
        siguienteFrame();
        tempFrame = 0;
    }
    tempFrame++;
}

void personaje::retroceder()
{
    if(direccion == Direccion::Arriba){ posy += velocidad; }
    else if(direccion == Direccion::Abajo){ posy -= velocidad; }
    else if(direccion == Direccion::Derecha){ posx -= velocidad; }
    else if(direccion == Direccion::Izquierda){ posx += velocidad; }

    setPos(posx, posy);
}

void personaje::morir()
{   fila=210;
    columna=54;
    this->velocidad=0;
    this->update(0, 0, 54, 54);
}

void personaje::ganar()
{   this->velocidad=0;

}

void personaje::cambiarFila()
{
    if(direccion == Direccion::Abajo){ fila = 0; }
    else if(direccion == Direccion::Arriba){ fila = 155; }
    else if(direccion == Direccion::Derecha){ fila = 105; }
    else if(direccion == Direccion::Izquierda){ fila = 55; }
}

void personaje::siguienteFrame()
{
    columna += 37;
    if(columna >= 107){ columna = 0; }
    this->update(0, 0, 37, 37);
}
