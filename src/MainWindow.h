#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPushButton>
#include <QTextEdit>
#include <QTextBrowser>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QPushButton* getStartButton(){
        return m_startButton;
    }

    QPushButton* getStopButton(){
        return m_stopButton;
    }

    QPushButton* getPauseButton(){
        return m_pauseButton;
    }


    QPushButton* getApplyButton(){
        return m_applyButton;
    }

    QTextEdit* getFilterField(){
        return m_filterField;
    }

    QTextBrowser* getPacketsCptrdField(){
        return m_packetsCptrdField;
    }

    QTextBrowser* getPacketsFullInfoField(){
        return m_packetFullInfoField;
    }

    QPushButton* getInterfaceButton(){
        return m_interfaceButton;
    }

    QPushButton* getShowInfoButton(){
        return m_showFullInfoButton;
    }

    QPushButton* getContinueButton(){
        return m_continueButton;
    }

private:
    Ui::MainWindow *ui;
    QPushButton* m_startButton;
    QPushButton* m_stopButton;
    QPushButton* m_pauseButton;

    QPushButton* m_applyButton;
    QPushButton* m_interfaceButton;
    QPushButton* m_showFullInfoButton;
    QPushButton* m_continueButton;

    QTextEdit* m_filterField;
    QTextBrowser* m_packetsCptrdField;
    QTextBrowser* m_packetFullInfoField;
};



#endif // MAINWINDOW_H
