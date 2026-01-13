#include "mainwindow.h"
#include "ui_mainwindow.h"
// 头文件声明
#include "QSerialPort"
#include "QSerialPortInfo"
#include "QMessageBox"

// 定义一个串口指针
QSerialPort *COM = new QSerialPort();


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 设置页面标签
    setWindowTitle("SguanUART");
    // 设置led颜色为默认的黑色
    ui->led->setStyleSheet("background-color:black");
    // 软件打开，串口默认刷新
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {
        ui->comboBox_com->addItem(info.portName());
    }
    // 串口接收与信号槽的连接
    connect(COM,SIGNAL(readyRead()),this,SLOT(Sguan_UartRX()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 1.按键开关串口
void MainWindow::on_key_open_clicked(void){
    ui->led->setStyleSheet("background-color:red");
    // 串口参数声明
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity  clickBits;
    // 串口参数定义
    dataBits = QSerialPort::Data8;
    stopBits = QSerialPort::OneStop;
    clickBits = QSerialPort::NoParity;
    // 串口speed判断
    int speed = ui->comboBox_speed->currentText().toInt();
    switch(speed) {
    case 9600: baudRate = QSerialPort::Baud9600; break;
    case 19200: baudRate = QSerialPort::Baud19200; break;
    case 38400: baudRate = QSerialPort::Baud38400; break;
    case 57600: baudRate = QSerialPort::Baud57600; break;
    case 115200: baudRate = QSerialPort::Baud115200; break;
    case 921600: baudRate = QSerialPort::Baud921600; break;
    case 1152000: baudRate = QSerialPort::Baud1152000; break;
    default: baudRate = QSerialPort::Baud9600; break;
    }
    // 串口参数初始化
    COM->setPortName(ui->comboBox_com->currentText());
    COM->setBaudRate(baudRate); // 波特率
    COM->setDataBits(dataBits); // 数据位
    COM->setStopBits(stopBits); // 停止位
    COM->setParity(clickBits);  // 校验位
    // 串口操作 打开/关闭
    if(ui->key_open->text() == "打开串口"){
        if(COM->open(QIODevice::ReadWrite) == true){
            ui->key_open->setText("关闭串口");
            ui->led->setStyleSheet("background-color:red");
        }
        else{
            QMessageBox::critical(this,"错误提示","打开串口失败or串口已被占用！");
        }
    }
    else if(ui->key_open->text() == "关闭串口"){
        COM->close();
        ui->key_open->setText("打开串口");
        ui->led->setStyleSheet("background-color:black");
    }
}

// 2.滚轮框选择串口端口
void MainWindow::on_key_refresh_clicked(void){
    ui->comboBox_com->clear(); //再次刷新，清除端口号
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {
        ui->comboBox_com->addItem(info.portName());
    }
}

// 3.按键发送串口消息
void MainWindow::on_key_tx_clicked(void){
    COM->write(ui->textEdit->toPlainText().toLatin1());
}

// 4.按键清空“串口发送框内容”
void MainWindow::on_key_clear_clicked(void){
    ui->textEdit->clear();
}

// 5.按键清空“UartRX接收框内容”
void MainWindow::on_key_rx_clear_clicked(void){
    ui->textBrowser->clear();
}

// 6.自定义“串口接收函数”
void MainWindow::Sguan_UartRX(void){
    QByteArray Buff;// 串口接收缓存区
    Buff = COM->readAll();
    QString String; // 定义一个字符变量
    if(!Buff.isEmpty()){
        String =  tr(Buff);
        ui->textBrowser->insertPlainText(String);
        ui->textBrowser->moveCursor(QTextCursor::End);
    }
}





