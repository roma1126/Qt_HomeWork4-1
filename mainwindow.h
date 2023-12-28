#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_rb_enableList_clicked(bool checked);

    void on_rb_disableList_clicked(bool checked);

    void on_pb_controlProgressBar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
