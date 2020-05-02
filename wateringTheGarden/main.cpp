#include "mainwindow.h"
#include <QApplication>
#include<QtDebug>

#include<iostream>

//classSection
#include "point.h"

using namespace std;

int main(int argc, char *argv[]) {
    Point p1 = Point(10.4, 11.2);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    //return 0;
}
