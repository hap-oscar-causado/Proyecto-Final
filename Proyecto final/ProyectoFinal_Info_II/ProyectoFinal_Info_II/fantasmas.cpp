#include "fantasmas.h"

fantasma::fantasma()
{

}

fantasma::fantasma(int x, int y, int an, int h)
{
    this->velocidad=3;
    this->posx=x;
    this->posy=y;
    this->ancho=an;
    this->alto=h;
    this->direccion=1; //1-derecha, 2-izq, 3 arr, 4 abaj
    setPos(posx,posy);
}

QRectF fantasma::boundingRect() const
{
      return QRectF(0,0,ancho,alto);
}

void fantasma::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pxmap_enemigo(":/new/persnj/Ghost (1).png");
    painter->drawPixmap(boundingRect(),pxmap_enemigo,pxmap_enemigo.rect());
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void fantasma::mover(bool calcularDireccion)
{   srand(time(NULL));
    if(calcularDireccion==true){
        if(direccion == 1){ posx -= velocidad; direccion = (rand() % 4) + 1; }
        else if(direccion == 2){ posx += velocidad; direccion = (rand() % 4) + 1; }
        else if(direccion == 3){ posy += velocidad; direccion = (rand() % 4) + 1; }
        else if(direccion == 4){ posy -= velocidad; direccion = (rand() % 4) + 1; }

        setPos(posx, posy);

    }
    else{

        switch(direccion)
        { case 1:
          posx+=velocidad;
            break;
        case 2:
              posx-=velocidad;
            break;
        case 3:
              posy-=velocidad;
            break;
        case 4:
              posy+=velocidad;
            break;
        }


     setPos(posx,posy);
    }
}
