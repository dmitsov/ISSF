#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <QWidget>
#include <QApplication>
#include <QDesktopWidget>
#include <iostream>
#include <QVector>
#include <QPushButton>
#include <QTextEdit>

#include "ISSF.h"
#include "MainWindow.h"
#include "UI/FilterSegment.h"

using namespace std;
//using namespace Ui;


ISSFApplication::ISSFApplication(int &argc, char **argv)
:QApplication(argc,argv)
{

    main = new MainWindow();
    main->setGeometry(200,200,500,600);
    main->show();

    QVector<QPushButton*> *buttons =main->getProcessButtons();

    pbSegment = new PBSegment(main,buttons);

    //creating the filter segment
    QPushButton *apply = main->getApplyButton();
    QTextEdit *filterField = main->getFilterField();

    filterSegment = new FilterSegment(main,apply,filterField);

}

ISSFApplication::~ISSFApplication(){
}

void ISSFApplication::run(){

    this->exec();
}
