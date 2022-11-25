#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "charcos_de_muerte.h"
#include "enemigo.h"
#include "fantasmas.h"
#include "movimiento.h"
#include "salida.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <personaje.h>
#include <QVector>
#include <obstaculos.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QGraphicsScene *scene;
    personaje *Lily;
    QVector<obstaculos*> obstaculo ;
    QVector<charcos_de_muerte*> charcos;
    QVector<salida*> salidas;
    QVector<enemigo*> Torres;
    QVector<Movimiento*> flecha;
    QVector<Movimiento*> flecha1;
    QVector<Movimiento*> flecha2;
    QVector<Movimiento*> flecha3;
    QVector<fantasma*> fantasma ;

    QTimer *timer;
    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int contador = 1;
public slots:
    void funcionActivacionTimer();
    void funcionActivacionTimer2();
    void ActualizarPosicion();
    void ActualizarPosicion1();
    void ActualizarPosicion2();
    void ActualizarPosicion3();
    void on(int i);
    void MoverEnemigos();

private:
    Ui::MainWindow *ui;
    bool EvaluarColision(QGraphicsItem *item);
    bool EvaluarColision2(QGraphicsItem *item);
    bool EvaluarColisionFlechas(QGraphicsItem *item, int flecha);
    void keyPressEvent(QKeyEvent *evento);
    void AnadirObstaculos(int);
    void GameOver();
    void win();
};
#endif // MAINWINDOW_H
