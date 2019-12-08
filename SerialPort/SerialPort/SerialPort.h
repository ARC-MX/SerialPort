#pragma once

#include <QtWidgets/QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

#include "ui_SerialPort.h"

class SerialPort : public QMainWindow
{
	Q_OBJECT

public:
	SerialPort(QWidget *parent = Q_NULLPTR);

private:
	Ui::SerialPortClass ui;


	QSerialPort serial;//´®¿ÚÊµÀý
	QSerialPortInfo com_info;
	QByteArray sendData;


};
