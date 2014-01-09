#ifndef ISSF_H_
#define ISSF_H_

#include <stdio.h>
#include <QWidget>
#include <QDesktopWidget>
#include <QApplication>

#include "UI/SimplePushButton.h"
#include "UI/ProcessButtonsSegment.h"
#include "UI/FilterSegment.h"
#include "MainWindow.h"


#define DEFAULT_WINDOW_HEIGHT 500
#define DEFAULT_WINDOW_WIDTH 500
//using namespace Ui;

class ISSFApplication: public QApplication{
private:
   // QWidget *m_window;
   // QDesktopWidget *m_desktop;
   PBSegment *pbSegment;
   FilterSegment *filterSegment;
   MainWindow *main;

public:
    ISSFApplication(int &argc, char **argv);
    ~ISSFApplication();

    void run();

};


#endif
