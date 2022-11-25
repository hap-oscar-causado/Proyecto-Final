#ifndef FANTASMAS_H
#define FANTASMAS_H

#include <QGraphicsItem>
#include <QPainter>


class fantasma : public QGraphicsItem
{   int posx;
    int posy;
    int ancho;
    int alto;
    int velocidad;
    int direccion;

public:
    fantasma();
    fantasma(int x, int y, int an, int h);

    QRectF boundingRect() const;
    void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void mover(bool calcularDireccion);
    void retroceder();

};

#endif // FANTASMAS_H
