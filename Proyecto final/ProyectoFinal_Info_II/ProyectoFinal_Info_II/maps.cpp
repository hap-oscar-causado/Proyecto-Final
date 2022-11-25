#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <personaje.h>
#include <QKeyEvent>
#include <QPixmap>


void MainWindow::AnadirObstaculos(int nivel){

    for(int i=0;i<330;i+=10){
        obstaculo.push_back(new obstaculos(0,i,30,30,0));
        scene->addItem(obstaculo.back());
        }
    //Primera fila pasto
    for(int i=15;i<675;i+=10){
        obstaculo.push_back(new obstaculos(i,0,30,30,0));
        scene->addItem(obstaculo.back());
        }
    //Segunda columna pasto
    for(int i=0;i<330;i+=10){
        obstaculo.push_back(new obstaculos(665,i,30,30,0));
        scene->addItem(obstaculo.back());
        }
    //Segunda fila pasto
    for(int i=0;i<675;i+=10){
        obstaculo.push_back(new obstaculos(i,330,30,30,0));
        scene->addItem(obstaculo.back());
        }



   if (nivel==1) {


        //                                       X  Y    T   img

        for (int i = 15; i <= 85; i +=10){
            obstaculo.push_back(new obstaculos(i,70,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 15; i <= 145; i +=10){
            obstaculo.push_back(new obstaculos(i,80,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 85; i <= 145; i +=10){
            obstaculo.push_back(new obstaculos(i,90,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 145; i <= 215; i +=10){
            obstaculo.push_back(new obstaculos(i,150,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 145; i <= 285; i +=10){
            obstaculo.push_back(new obstaculos(i,160,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 215; i <= 285; i +=10){
            obstaculo.push_back(new obstaculos(i,170,20,30,3));
            scene->addItem(obstaculo.back());
        }



        for (int i = 585; i <= 655; i +=10){
            obstaculo.push_back(new obstaculos(i,70,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 525; i <= 655; i +=10){
            obstaculo.push_back(new obstaculos(i,80,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i = 525; i <= 585; i +=10){
            obstaculo.push_back(new obstaculos(i,90,20,30,3));
            scene->addItem(obstaculo.back());
        }


        charcos.push_back(new charcos_de_muerte(150,550,30,30,1));
        scene->addItem(charcos.back());
        for (int i = 165; i <= 1170; i += 15){
            charcos.push_back(new charcos_de_muerte(i,550,30,30,2));
            scene->addItem(charcos.back());
        }
        charcos.push_back(new charcos_de_muerte(1185,550,30,30,3));
        scene->addItem(charcos.back());

        charcos.push_back(new charcos_de_muerte(150,565,30,30,7));
        scene->addItem(charcos.back());
        for (int i = 165; i <= 1170; i += 15){
            charcos.push_back(new charcos_de_muerte(i,565,30,30,8));
            scene->addItem(charcos.back());
        }
        charcos.push_back(new charcos_de_muerte(1185,565,30,30,9));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(440,560,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(800,557,30,30,0));
        scene->addItem(charcos.back());



        obstaculo.push_back(new obstaculos(135,10,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(535,10,30,30,1));
        scene->addItem(obstaculo.back());
        for (int i = 150; i <= 520; i +=10){
            obstaculo.push_back(new obstaculos(i,10,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(185,20,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(485,20,30,30,1));
        scene->addItem(obstaculo.back());
        for (int i = 200; i <= 470; i +=10){
            obstaculo.push_back(new obstaculos(i,20,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(285,30,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(385,30,30,30,1));
        scene->addItem(obstaculo.back());
        for (int i = 300; i <= 370; i +=10){
            obstaculo.push_back(new obstaculos(i,30,30,30,0));
            scene->addItem(obstaculo.back());
        }

        obstaculo.push_back(new obstaculos(335,220,30,30,0));
        scene->addItem(obstaculo.back());
        for (int i = 325; i <= 345; i+= 10){
            obstaculo.push_back(new obstaculos(i,230,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(335,240,30,30,0));
        scene->addItem(obstaculo.back());

        obstaculo.push_back(new obstaculos(335,60,30,30,0));
        scene->addItem(obstaculo.back());
        for (int i = 325; i <= 345; i+= 10){
            obstaculo.push_back(new obstaculos(i,70,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(335,80,30,30,0));
        scene->addItem(obstaculo.back());

        /*obstaculo.push_back(new obstaculos(620,160,30,30,0));
        scene->addItem(obstaculo.back());
        for (int i = 610; i <= 630; i+=10){
            obstaculo.push_back(new obstaculos(i,170,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(620,180,30,30,0));
        scene->addItem(obstaculo.back());*/


        obstaculo.push_back(new obstaculos(45,160,30,30,0));
        scene->addItem(obstaculo.back());
        for (int i = 35; i <= 55; i+=10){
            obstaculo.push_back(new obstaculos(i,170,30,30,0));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(45,180,30,30,0));
        scene->addItem(obstaculo.back());

        Torres.push_back(new enemigo(1100,220,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(1000,105,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(500,100,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(1100,350,45,70));
        scene->addItem(Torres.back());




    }

   else if (nivel==2){
        charcos.push_back(new charcos_de_muerte(30,90,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(60,90,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,90,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(30,120,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(60,120,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,120,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(30,150,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(60,150,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,150,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,150,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(60,180,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,180,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,180,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,180,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,210,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,210,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,210,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,240,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,240,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,240,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,270,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,270,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,270,30,30,9));
        scene->addItem(charcos.back());

        charcos.push_back(new charcos_de_muerte(420,330,30,30,7));
        scene->addItem(charcos.back());
        for (int i=450; i <= 900; i+=30){
            charcos.push_back(new charcos_de_muerte(i,330,30,30,8));
            scene->addItem(charcos.back());
        }
        charcos.push_back(new charcos_de_muerte(930,330,30,30,9));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(420,300,30,30,1));
        scene->addItem(charcos.back());
        for (int i=450; i <= 900; i+=30){
            charcos.push_back(new charcos_de_muerte(i,300,30,30,2));
            scene->addItem(charcos.back());
        }
        charcos.push_back(new charcos_de_muerte(930,300,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(510,320,30,30,0));
        scene->addItem(charcos.back());



        charcos.push_back(new charcos_de_muerte(1240,90,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1270,90,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1300,90,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,120,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1270,120,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1300,120,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,150,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,150,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1270,150,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1300,150,30,30,9));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,180,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,180,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,180,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1270,180,30,30,9));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,210,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,210,30,30,5));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,210,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,240,30,30,4));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,240,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,240,30,30,6));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,270,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,270,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,270,30,30,9));
        scene->addItem(charcos.back());


        charcos.push_back(new charcos_de_muerte(90,540,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(180,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(210,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(240,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(240,540,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(180,550,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(90,570,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(120,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(150,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(180,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(210,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(240,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(240,570,30,30,9));
        scene->addItem(charcos.back());


        charcos.push_back(new charcos_de_muerte(1090,540,30,30,1));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1120,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1150,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,540,30,30,2));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,540,30,30,3));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1150,550,30,30,0));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1090,570,30,30,7));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1120,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1150,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1180,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1210,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,570,30,30,8));
        scene->addItem(charcos.back());
        charcos.push_back(new charcos_de_muerte(1240,570,30,30,9));
        scene->addItem(charcos.back());



        obstaculo.push_back(new obstaculos(117,30,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(117,40,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(545,30,30,30,1));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(545,40,30,30,1));
        scene->addItem(obstaculo.back());

        for (int i=130; i<= 535; i+=10) {
            obstaculo.push_back(new obstaculos(i,30,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i=130; i<= 250; i+=10) {
            obstaculo.push_back(new obstaculos(i,40,30,30,0));
            scene->addItem(obstaculo.back());
        }

        for (int i=260; i<= 410; i+=10){
            obstaculo.push_back(new obstaculos(i,40,20,30,3));
            scene->addItem(obstaculo.back());
        }

        for (int i=420; i<= 535; i+=10) {
            obstaculo.push_back(new obstaculos(i,40,30,30,0));
            scene->addItem(obstaculo.back());
        }



        for (int i = 170; i >= 50; i -= 10){
            obstaculo.push_back(new obstaculos(i,220,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i = 170; i >= 50; i -= 10){
            obstaculo.push_back(new obstaculos(i,230,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i = 490; i <= 610; i += 10){
            obstaculo.push_back(new obstaculos(i,220,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i = 490; i <= 610; i += 10){
            obstaculo.push_back(new obstaculos(i,230,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i=220; i <= 260; i+=10){
            obstaculo.push_back(new obstaculos(180,i,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i=220; i <= 260; i+=10){
            obstaculo.push_back(new obstaculos(490,i,30,30,0));
            scene->addItem(obstaculo.back());
        }

        for (int i=180; i <= 280; i +=10){
            obstaculo.push_back(new obstaculos(i,270,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i=390; i <=490; i+=10){
            obstaculo.push_back(new obstaculos(i,270,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i=290; i <= 380; i+= 10){
            obstaculo.push_back(new obstaculos(i,270,20,30,3));
            scene->addItem(obstaculo.back());
        }
        for (int i=180; i <= 490; i +=10){
            obstaculo.push_back(new obstaculos(i,280,30,30,0));
            scene->addItem(obstaculo.back());
        }



        for (int i = 140; i <= 200; i += 10){
            obstaculo.push_back(new obstaculos(i,90,30,30,0));
            scene->addItem(obstaculo.back());
        }
        for (int i = 465; i <= 535; i += 10){
            obstaculo.push_back(new obstaculos(i,90,30,30,0));
            scene->addItem(obstaculo.back());
        }

        for (int i = 100;i <= 150; i += 10){
            obstaculo.push_back(new obstaculos(140,i,30,30,0));
            scene->addItem(obstaculo.back());
        }

        for (int i = 242; i <= 440; i += 12){
            obstaculo.push_back(new obstaculos(i,222,25,25,4));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(230,220,30,30,2));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(440,220,30,30,2));
        scene->addItem(obstaculo.back());

        for (int i = 220; i <= 465; i += 12){
            obstaculo.push_back(new obstaculos(i,92,25,25,4));
            scene->addItem(obstaculo.back());
        }
        obstaculo.push_back(new obstaculos(210,90,30,30,2));
        scene->addItem(obstaculo.back());
        obstaculo.push_back(new obstaculos(465,90,30,30,2));
        scene->addItem(obstaculo.back());

        Torres.push_back(new enemigo(1200,310,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(900,470,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(700,220,45,70));
        scene->addItem(Torres.back());
        Torres.push_back(new enemigo(950,110,45,70));
        scene->addItem(Torres.back());

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



    }

    }


