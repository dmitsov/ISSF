#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPushButton>
#include <QTextEdit>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QVector<QPushButton*>* getProcessButtons(){
        return buttons;
    }

    QPushButton* getApplyButton(){
        return applyButton;
    }

    QTextEdit* getFilterField(){
        return filterField;
    }

private:
    Ui::MainWindow *ui;
    QVector<QPushButton*> *buttons;
    QPushButton *applyButton;
    QTextEdit *filterField;
};



#endif // MAINWINDOW_H
