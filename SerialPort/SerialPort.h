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


	QList<QSerialPortInfo>  infos;
	QSerialPort serial;			//´®¿ÚÊµÀý	
	QSerialPortInfo com_info;
	QByteArray sendData;
private slots:
	void setSerialPortNumber();
	void setBaudRate();
	void setDataBits();
	void setParity();
	void setStopBits();
	void setFlowControl();
	void openSerial(bool OpenFlag);


};
