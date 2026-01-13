#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_key_open_clicked(void);
    void on_key_refresh_clicked(void);
    void on_key_tx_clicked(void);
    void on_key_clear_clicked(void);
    void on_key_rx_clear_clicked(void);
    void Sguan_UartRX(void);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
