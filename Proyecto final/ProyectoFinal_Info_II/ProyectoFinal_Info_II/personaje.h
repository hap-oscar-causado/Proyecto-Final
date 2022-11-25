#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include <QMessageBox>

enum class Direccion{ Arriba, Abajo, Derecha, Izquierda };

class personaje : public QGraphicsItem
{
    int ancho;
    int alto;
    int velocidad;
    Direccion direccion;

    QPixmap sprite;
    int fila;
    int columna;
    int tempFrame;

    void cambiarFila();
    void siguienteFrame();

public:
    int posx;
    int posy;
    personaje(int x, int y, int an, int h);

    QRectF boundingRect() const;
    void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void nuevaDireccion(Direccion d);

    void mover();
    void retroceder();
    void morir();
    void ganar();

};

#endif // PERSONAJE_H
