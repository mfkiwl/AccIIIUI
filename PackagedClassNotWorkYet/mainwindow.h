#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "acciii.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void plotData(std::vector<std::vector<double>> data_buffer, int dataSetNum, float fs);
    //float returnSampleTime();

private slots:
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;

    Acciii* acciii;
    float sampleTime;
};
#endif // MAINWINDOW_H
