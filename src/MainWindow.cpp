#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QWidget>
#include <QPushButton>

//using namespace Ui

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_startButton = ui->playButton;
    m_pauseButton = ui->pauseButton;
    m_stopButton = ui->stopButton;

    m_applyButton = ui->applyButton;
    m_filterField = ui->filterField;
    m_packetsCptrdField = ui->packetsCptrd;
    m_packetFullInfoField = ui->packetInfo;
    m_interfaceButton = ui->Interface;

    m_showFullInfoButton = ui->m_ShowFullInfoButton;
    m_continueButton = ui->m_continueButton;


}

MainWindow::~MainWindow()
{
    delete ui;
}

