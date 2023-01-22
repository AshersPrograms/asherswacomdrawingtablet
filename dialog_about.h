#ifndef DIALOG_ABOUT_H
#define DIALOG_ABOUT_H

#include <QDialog>

namespace Ui {
class Dialog_about;
}

class Dialog_about : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_about(QWidget *parent = nullptr);
    ~Dialog_about();

private slots:
    void on_pushButton_quit_clicked();


    void on_pushButton_help_video_clicked();

    void on_pushButton_facebook_clicked();

    void on_pushButton_qt_clicked();

    void on_pushButton_gpt_clicked();

    void on_pushButton_sourcecode_clicked();

    void on_pushButton_Helped_qprocess_clicked();

    void on_pushButton_mxlinux_clicked();

private:
    Ui::Dialog_about *ui;


    QString fire = "firefox";
};

#endif // DIALOG_ABOUT_H
