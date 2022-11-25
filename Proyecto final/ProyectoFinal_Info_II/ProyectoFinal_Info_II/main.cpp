#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QIcon>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/new/persnj/Pantalla de carga.jpeg"));
    splash->show();

    MainWindow w;

    QTimer::singleShot(3000,splash,&QSplashScreen::close);
    QTimer::singleShot(3100,&w,&MainWindow::show);
    return a.exec();
}
