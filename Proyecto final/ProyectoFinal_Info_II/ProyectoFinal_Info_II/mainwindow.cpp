#include "mainwindow.h"
#include "salida.h"
#include "ui_mainwindow.h"
#include <personaje.h>
#include <QKeyEvent>
#include <QPixmap>
#include <QTimer>
#include <QMessageBox>
#include <fantasmas.h>


int nivel = 1;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,1360,710);
    QPixmap pix_fondo(":/new/persnj/Styles/map_backgroud.png");
    scene->setBackgroundBrush(pix_fondo);

    Lily = new personaje(30,30,37,50);
    scene->addItem(Lily);


    AnadirObstaculos(nivel);

    QTimer *cronometro_enemigos = new QTimer(this);
    connect(cronometro_enemigos, SIGNAL(timeout()),this, SLOT(MoverEnemigos()));
    cronometro_enemigos->start(100);

    fantasma.push_back(new class fantasma(70,280,40,40));
    scene->addItem(fantasma.back());
    fantasma.push_back(new class fantasma(150,400,40,40));
    scene->addItem(fantasma.back());
    fantasma.push_back(new class fantasma(320,100,40,40));
    scene->addItem(fantasma.back());
    fantasma.push_back(new class fantasma(250,500,40,40));
    scene->addItem(fantasma.back());
    fantasma.push_back(new class fantasma(30,320,40,40));
    scene->addItem(fantasma.back());
    fantasma.push_back(new class fantasma(80,600,40,40));
    scene->addItem(fantasma.back());

    timer= new QTimer();
    connect(timer, SIGNAL(timeout()), this,SLOT(ActualizarPosicion()));
    timer1= new QTimer();
    connect(timer1, SIGNAL(timeout()), this,SLOT(ActualizarPosicion1()));
    timer2= new QTimer();
    connect(timer2, SIGNAL(timeout()), this,SLOT(ActualizarPosicion2()));
    timer3= new QTimer();
    connect(timer3, SIGNAL(timeout()), this,SLOT(ActualizarPosicion3()));
       on(0);
       on(1);
       on(2);
       on(3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::funcionActivacionTimer()
{   GameOver();
    contador--;
    if(contador<0){
        exit(0);
    }
}

void MainWindow::funcionActivacionTimer2()
{   win();
    contador--;
    if(contador<0){
        exit(0);
    }

}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_W){ Lily->nuevaDireccion(Direccion::Arriba);  Lily->mover();}
    else if(evento->key()==Qt::Key_S){ Lily->nuevaDireccion(Direccion::Abajo);   Lily->mover();}
    else if(evento->key()==Qt::Key_D){ Lily->nuevaDireccion(Direccion::Derecha);   Lily->mover();}
    else if(evento->key()==Qt::Key_A){ Lily->nuevaDireccion(Direccion::Izquierda);  Lily->mover();}

    if(EvaluarColision(Lily)){
        Lily->retroceder();
    }
    if(EvaluarColision2(Lily)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }
    if(EvaluarColisionFlechas(Lily,0)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }
    if(EvaluarColisionFlechas(Lily,1)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }
    if(EvaluarColisionFlechas(Lily,2)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }
    if(EvaluarColisionFlechas(Lily,3)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }

    if(EvaluarColisionFlechas(Lily,4)){
        Lily->retroceder();
    }

    if(EvaluarColisionFlechas(Lily,5)){
        Lily->morir();
        QTimer *cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer()));
        cronometro->start(1000);
    }
    if (nivel == 1){
        if((1200-(this->Lily->posx)<=50 && 1200-(this->Lily->posx)>=-50) && (220-(this->Lily->posy)<=50 && 220-(this->Lily->posy)>=-50)){
            salidas.push_back(new salida(1200,220,30,30));
            scene->addItem(salidas.back());

            int Lily_posX = Lily->posx;
            int Lily_posY = Lily->posy;
            delete Lily;
            Lily = new personaje(Lily_posX,Lily_posY,37,50);
            scene->addItem(Lily);

            if((1200-(this->Lily->posx)<=10 && 1200-(this->Lily->posx)>=-10) && (220-(this->Lily->posy)<=10 && 220-(this->Lily->posy)>=-10)){
                int sizes = charcos.size();
                for (int i = 0; i < sizes; i++){
                    scene->removeItem(charcos.back());
                    charcos.pop_back();
                }
                sizes = obstaculo.size();
                for (int i = 0; i < sizes; i++){
                    scene->removeItem(obstaculo.back());
                    obstaculo.pop_back();
                }
            for (int i = 0; i < 4; i++){
                scene->removeItem(Torres.back());
                Torres.pop_back();
                        }
                delete Lily;
                scene->removeItem(salidas.back());
                salidas.pop_back();
                Lily = new personaje(30,30,37,50);
                scene->addItem(Lily);
                nivel+=1;
                sizes = fantasma.size();
                for (int i = 0; i < sizes; i++){
                    scene->removeItem(fantasma.back());
                    fantasma.pop_back();
                }

                AnadirObstaculos(nivel);

            }


        }
    }
    else if (nivel == 2) {
        if ((1000-(this->Lily->posx)<=50 && 1000-(this->Lily->posx)>=-50) && (350-(this->Lily->posy)<=50 && 350-(this->Lily->posy)>=-50)){
            salidas.push_back(new salida(1000,350,30,30));
            scene->addItem(salidas.back());

            int Lily_posX = Lily->posx;
            int Lily_posY = Lily->posy;
            delete Lily;
            Lily = new personaje(Lily_posX,Lily_posY,37,50);
            scene->addItem(Lily);
         if ((1000-(this->Lily->posx)<=10 && 1000-(this->Lily->posx)>=-10) && (350-(this->Lily->posy)<=10 && 350-(this->Lily->posy)>=-10)){
             QTimer *cronometro1 = new QTimer(this);
             connect(cronometro1, SIGNAL(timeout()),this, SLOT(funcionActivacionTimer2()));
             cronometro1->start(1000);
         }


        }
    }
}

bool MainWindow::EvaluarColision(QGraphicsItem *item)
{
    QVector<obstaculos*>::Iterator it;
    for(it=obstaculo.begin();it!=obstaculo.end();it++){
        if((*it)->collidesWithItem(item)){
            return true;
        }
    }
    return false;
}

bool MainWindow::EvaluarColision2(QGraphicsItem *item)
{
   QVector<charcos_de_muerte*>::Iterator it;
    for(it=charcos.begin();it!=charcos.end();it++){
        if((*it)->collidesWithItem(item)){
            return true;
        }
    }
    return false;
}

bool MainWindow::EvaluarColisionFlechas(QGraphicsItem *item, int numflecha)
{   if(numflecha ==  0){
        QVector<Movimiento*>::Iterator it;
         for(it=flecha.begin();it!=flecha.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    if(numflecha ==  1){
        QVector<Movimiento*>::Iterator it;
         for(it=flecha1.begin();it!=flecha1.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    if(numflecha ==  2){
        QVector<Movimiento*>::Iterator it;
         for(it=flecha2.begin();it!=flecha2.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    if(numflecha ==  3){
        QVector<Movimiento*>::Iterator it;
         for(it=flecha3.begin();it!=flecha3.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    if(numflecha == 4){
        QVector<enemigo*>::Iterator it;
         for(it=Torres.begin();it!=Torres.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    if(numflecha == 5){
         for(auto it=fantasma.begin();it!=fantasma.end();it++){
             if((*it)->collidesWithItem(item)){
                 return true;
             }
         }
         return false;
    }
    return false;
}
void MainWindow::GameOver()
{
    QMessageBox::warning(this,"Mensaje","GAME OVER");
}

void MainWindow::ActualizarPosicion()
{
    flecha.back()->CalcularVelocidad();
    flecha.back()->ActualizarVelocidad();
    flecha.back()->CalcularPosicion();
    if(EvaluarColision(flecha.back()) || EvaluarColision2(flecha.back())){
        timer->stop();
        scene->removeItem(flecha.back());
        flecha.pop_back();
        on(0);

    }
}

void MainWindow::ActualizarPosicion1()
{
    flecha1.back()->CalcularVelocidad();
    flecha1.back()->ActualizarVelocidad();
    flecha1.back()->CalcularPosicion();
    if(EvaluarColision(flecha1.back()) || EvaluarColision2(flecha1.back())){
        timer1->stop();
        scene->removeItem(flecha1.back());
        flecha1.pop_back();
        on(1);

    }
}
void MainWindow::ActualizarPosicion2()
{
    flecha2.back()->CalcularVelocidad();
    flecha2.back()->ActualizarVelocidad();
    flecha2.back()->CalcularPosicion();
    if(EvaluarColision(flecha2.back()) || EvaluarColision2(flecha2.back())){
        timer2->stop();
        scene->removeItem(flecha2.back());
        flecha2.pop_back();
        on(2);

    }
}
void MainWindow::ActualizarPosicion3()
{
    flecha3.back()->CalcularVelocidad();
    flecha3.back()->ActualizarVelocidad();
    flecha3.back()->CalcularPosicion();
    if(EvaluarColision(flecha3.back()) || EvaluarColision2(flecha3.back())){
        timer3->stop();
        scene->removeItem(flecha3.back());
        flecha3.pop_back();
        on(3);

    }
}
void MainWindow::on(int i)
{
    double x,y,vel;
    x=this->Torres[i]->posx;
    y=this->Torres[i]->posy;
    vel=70;
    double rad=(30)*3.1459/180;
    switch (i) {
    case 0:
        flecha.push_back(new Movimiento(x,y,rad,vel));
        scene->addItem(flecha.back());
        timer->start(100);
        break;
    case 1:
        flecha1.push_back(new Movimiento(x,y,rad,vel));
        scene->addItem(flecha1.back());
        timer1->start(100);
        break;
    case 2:
        flecha2.push_back(new Movimiento(x,y,rad,vel));
        scene->addItem(flecha2.back());
        timer2->start(100);
        break;
    case 3:
        flecha3.push_back(new Movimiento(x,y,rad,vel));
        scene->addItem(flecha3.back());
        timer3->start(100);
        break;
    default:
        break;
    }


}

void MainWindow::MoverEnemigos()
{
    for(int i = 0; i < fantasma.count(); i++){

            if(EvaluarColision(fantasma[i])==true || EvaluarColision2(fantasma[i])==true)
                 fantasma[i]->mover(true);
            else
                 fantasma[i]->mover(false);
         }

}

void MainWindow::win()
{
    QMessageBox::information(this,"¡¡Enhorabuena!!","¡¡FELICIDADES, GANASTE!!");
}
