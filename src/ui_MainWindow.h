/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *ProcessbuttonGridLayout;
    QPushButton *Interface;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *playButton;
    QPushButton *stopButton;
    QPushButton *pauseButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *filterGridLayout;
    QSpacerItem *verticalSpacer;
    QTextEdit *filterField;
    QPushButton *applyButton;
    QTextBrowser *packetsCptrd;
    QTextBrowser *packetInfo;
    QPushButton *m_continueButton;
    QPushButton *m_ShowFullInfoButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(778, 430);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 370, 54));
        ProcessbuttonGridLayout = new QGridLayout(gridLayoutWidget);
        ProcessbuttonGridLayout->setSpacing(6);
        ProcessbuttonGridLayout->setContentsMargins(11, 11, 11, 11);
        ProcessbuttonGridLayout->setObjectName(QStringLiteral("ProcessbuttonGridLayout"));
        ProcessbuttonGridLayout->setContentsMargins(0, 0, 0, 0);
        Interface = new QPushButton(gridLayoutWidget);
        Interface->setObjectName(QStringLiteral("Interface"));

        ProcessbuttonGridLayout->addWidget(Interface, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProcessbuttonGridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProcessbuttonGridLayout->addItem(horizontalSpacer_4, 1, 8, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProcessbuttonGridLayout->addItem(horizontalSpacer_2, 1, 6, 1, 1);

        playButton = new QPushButton(gridLayoutWidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setMaximumSize(QSize(100, 100));
        playButton->setBaseSize(QSize(50, 50));
        playButton->setFocusPolicy(Qt::StrongFocus);
        playButton->setLayoutDirection(Qt::LeftToRight);
        playButton->setAutoFillBackground(false);

        ProcessbuttonGridLayout->addWidget(playButton, 1, 3, 1, 1);

        stopButton = new QPushButton(gridLayoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        ProcessbuttonGridLayout->addWidget(stopButton, 1, 7, 1, 1);

        pauseButton = new QPushButton(gridLayoutWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setMaximumSize(QSize(100, 100));
        pauseButton->setBaseSize(QSize(50, 50));

        ProcessbuttonGridLayout->addWidget(pauseButton, 1, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProcessbuttonGridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProcessbuttonGridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(370, 0, 371, 93));
        filterGridLayout = new QGridLayout(gridLayoutWidget_2);
        filterGridLayout->setSpacing(6);
        filterGridLayout->setContentsMargins(11, 11, 11, 11);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        filterGridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        filterGridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        filterField = new QTextEdit(gridLayoutWidget_2);
        filterField->setObjectName(QStringLiteral("filterField"));
        filterField->setMaximumSize(QSize(500, 25));
        filterField->setBaseSize(QSize(50, 50));

        filterGridLayout->addWidget(filterField, 0, 1, 1, 1);

        applyButton = new QPushButton(gridLayoutWidget_2);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        filterGridLayout->addWidget(applyButton, 0, 2, 1, 1);

        packetsCptrd = new QTextBrowser(centralWidget);
        packetsCptrd->setObjectName(QStringLiteral("packetsCptrd"));
        packetsCptrd->setGeometry(QRect(10, 70, 731, 151));
        packetInfo = new QTextBrowser(centralWidget);
        packetInfo->setObjectName(QStringLiteral("packetInfo"));
        packetInfo->setGeometry(QRect(10, 270, 731, 192));
        m_continueButton = new QPushButton(centralWidget);
        m_continueButton->setObjectName(QStringLiteral("m_continueButton"));
        m_continueButton->setGeometry(QRect(660, 230, 80, 23));
        m_ShowFullInfoButton = new QPushButton(centralWidget);
        m_ShowFullInfoButton->setObjectName(QStringLiteral("m_ShowFullInfoButton"));
        m_ShowFullInfoButton->setGeometry(QRect(549, 230, 101, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 778, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Interface->setText(QApplication::translate("MainWindow", "Interface", 0));
        playButton->setText(QApplication::translate("MainWindow", "Play", 0));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", 0));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        m_continueButton->setText(QApplication::translate("MainWindow", "Continue", 0));
        m_ShowFullInfoButton->setText(QApplication::translate("MainWindow", "Show Full Info", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
