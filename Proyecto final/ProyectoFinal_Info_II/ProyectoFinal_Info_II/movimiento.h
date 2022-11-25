#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H
#include <math.h>
#include <QGraphicsItem>
#include <QPainter>

# define tiempo 0.1
class Movimiento : public QGraphicsItem
{

    // atributos

    double posx;
    double posy;
    double velocidad;
    double angulo;
    double velx;
    double vely;
    int r=10;

public:
    Movimiento();    
    Movimiento(double x, double y, double ang, double v);
    void CalcularPosicion();
    void CalcularVelocidad();
    void ActualizarVelocidad();
    QRectF boundingRect() const;
        void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    double getPosx() const;
    double getPosy() const;
};

#endif // MOVIMIENTO_H
