#include "SerialPort.h"

SerialPort::SerialPort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QList<QSerialPortInfo>  infos = QSerialPortInfo::availablePorts();

	if (infos.isEmpty())
	{
		qDebug() << "infos.isEmpty() " << infos.isEmpty();
	}
	QString text = QString::fromLocal8Bit("当前发现串口信息：");
	//ui.textEdit->append(text);
	foreach(const QSerialPortInfo &info, infos)
	{
		qDebug() << "\r\n------------------- QSerialPortInfo display ------------------------\r";
		qDebug() << "Name : " << info.portName();
		qDebug() << "Description : " << info.description();
		qDebug() << "serialNumber: " << info.serialNumber();
		qDebug() << "standardBaudRates" << info.standardBaudRates();
		//ui.serialPort->addItem(info.portName());
		text = QString::fromLocal8Bit("  端口号：") + info.portName();
		//ui.textEdit->append(text);
		if (info.portName() == "COM4")
		{
		//	ui.serialPort->setCurrentText("COM4");
			com_info = info;
		}
	}
	text = QString::fromLocal8Bit("当前选择串口：") + com_info.portName();
	//ui.textEdit->append(text);
	serial.setPort(com_info);
	serial.close();

	sendData.resize(8);
}
