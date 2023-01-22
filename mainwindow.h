#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QCoreApplication>
#include <QMainWindow>
#include <iostream>
#include <QProcess>
#include <iostream>
#include <vector>
#include <QRegularExpression>
#include <QMessageBox>

#include "dialog_about.h"
#include "dialog_credits.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

    void on_pushButton_submit_clicked();


   // void on_pushButton_list_devices_clicked();

    //void on_pushButton_current_settings_clicked();

   // void on_pushButton_key_modifiers_clicked();

   // void on_pushButton_list_parameters_clicked();

    void on_radioButton_mode_relative_clicked();

    void on_radioButton_mode_absolute_clicked();

    void on_actionSubmit_triggered();

    void on_checkBox_multipleTabletNumbers_stateChanged(int arg1);

    //void on_pushButton_submitTest_clicked();

    void on_actionAbout_triggered();

    void on_actionindex_triggered();

private:
    Ui::MainWindow *ui;
    Dialog_about *about;
    Dialog_credits *credits;

    QString wac = "xsetwacom ";

};
#endif // MAINWINDOW_H
