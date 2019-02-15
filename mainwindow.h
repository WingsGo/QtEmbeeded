//
// Created by 10189 on 2019/2/15.
//

#ifndef UNTITLED_MAINWINDOW_H
#define UNTITLED_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //UNTITLED_MAINWINDOW_H
