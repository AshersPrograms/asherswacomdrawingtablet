#ifndef DIALOG_CREDITS_H
#define DIALOG_CREDITS_H

#include <QDialog>

namespace Ui {
class Dialog_credits;
}

class Dialog_credits : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_credits(QWidget *parent = nullptr);
    ~Dialog_credits();

private slots:
    void on_pushButton_help_video_clicked();

    void on_pushButton_facebook_clicked();

    void on_pushButton_qt_clicked();

    void on_pushButton_gpt_clicked();

    void on_pushButton_sourcecode_clicked();

    void on_pushButton_Helped_qprocess_clicked();

    void on_pushButton_mxlinux_clicked();

    void on_pushButton_quit_clicked();

private:
    Ui::Dialog_credits *ui;
    QString fire = "firefox";
};

#endif // DIALOG_CREDITS_H
