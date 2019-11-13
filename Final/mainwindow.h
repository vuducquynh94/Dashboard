#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QTimeZone>
#include <QJsonArray>

#include "httpmanager.h"
#include "todolist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void setCurrentTime();
    void setWorldTime();
    void setPhoto();
    void processImage(QPixmap *);
    void processWeatherJson(QJsonObject *json);

    void on_imageDownloadButton_clicked();

    void on_weatherDownloadButton_clicked();

    void on_worldButton_clicked();

    void on_currentButton_clicked();

    void on_actionOpen_a_to_do_list_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    HTTPManager *httpManager;
    ToDoList *myModel;
    int timerCount;

};

#endif // MAINWINDOW_H
