#ifndef CHARCOS_DE_MUERTE_H
#define CHARCOS_DE_MUERTE_H


#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>

class charcos_de_muerte : public QGraphicsItem
{   int posx;
    int posy;
    int ancho;
    int alto;
    int sprite;

public:
    charcos_de_muerte();
    charcos_de_muerte(int x, int y, int an, int h, int sprite);

    QRectF boundingRect() const;
    void paint(QPainter *painte, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    int numero_charco();

};



#endif // CHARCOS_DE_MUERTE_H
