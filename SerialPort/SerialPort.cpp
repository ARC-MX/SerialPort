#include "SerialPort.h"

SerialPort::SerialPort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	infos = QSerialPortInfo::availablePorts();

	if (infos.isEmpty())
	{
		qDebug() << "infos.isEmpty() " << infos.isEmpty();
	}
	QString text = QString::fromLocal8Bit("当前发现串口信息： ");
	//ui.textEdit->append(text);
	foreach(const QSerialPortInfo &info, infos)
	{
		qDebug() << "\r\n------------------- QSerialPortInfo display ------------------------\r";
		qDebug() << "Name : " << info.portName();
		qDebug() << "Description : " << info.description();
		qDebug() << "serialNumber: " << info.serialNumber();
		qDebug() << "standardBaudRates" << info.standardBaudRates();
		ui.serialPortNumber->addItem(info.portName());
		//QList<int> intList = info.standardBaudRates();
		//ui.standardBaudRate->addItems(info.standardBaudRates());
		//ui.textEdit->append(text);
		text +=  info.portName()+"  ";
	}
	ui.statusBar->showMessage(text);
}

void SerialPort::setSerialPortNumber() {
	
	com_info = infos[ui.serialPortNumber->currentIndex()];
	qDebug() << "standardBaudRates" << com_info.standardBaudRates();
	QString text = QString::fromLocal8Bit("当前选择串口：") + com_info.portName();
	ui.statusBar->showMessage(text);
	serial.setPort(com_info);
	serial.close();
	sendData.resize(8);
}
void SerialPort::setBaudRate() {
	qDebug() << "standardBaudRates" << ui.standardBaudRate->currentText();
	serial.setBaudRate(ui.standardBaudRate->currentText().toInt());
	QString message = QString::fromLocal8Bit("设定串口：") + serial.portName() + QString::fromLocal8Bit(" 波特率为：") + QString::number(serial.baudRate());
	ui.statusBar->showMessage(message);

}
void SerialPort::setDataBits() {

	qDebug() << "setDataBits" << ui.dataBits->currentText();

	switch (ui.dataBits->currentText().toInt())
	{
	case 5:
		serial.setDataBits(QSerialPort::Data5);
		break;
	case 6:
		serial.setDataBits(QSerialPort::Data6);
		break;
	case 7:
		serial.setDataBits(QSerialPort::Data7);
		break;
	case 8:
		serial.setDataBits(QSerialPort::Data8);
		break;
	default:
		break;
	}
	QString message = QString::fromLocal8Bit("设定串口：") + serial.portName() + QString::fromLocal8Bit(" 数据位为：") + QString::number(serial.dataBits());
	ui.statusBar->showMessage(message);
	//serial.setDataBits()
}

void SerialPort::setParity() {

	qDebug() << "setParity" << ui.parity->currentText();

	switch (ui.dataBits->currentIndex())
	{
	case 0:
		serial.setParity(QSerialPort::NoParity);
		break;
	case 1:
		serial.setParity(QSerialPort::EvenParity);
		break;
	case 2:
		serial.setParity(QSerialPort::OddParity);
		break;
	case 3:
		serial.setParity(QSerialPort::SpaceParity);
		break;
	case 4:
		serial.setParity(QSerialPort::MarkParity);
		break;
	default:
		break;
	}
	QString message = QString::fromLocal8Bit("设定串口：") + serial.portName() + QString::fromLocal8Bit(" 校验位为：") + ui.dataBits->currentText();
	ui.statusBar->showMessage(message);

}


void SerialPort::setStopBits(){
	
	qDebug() << "setStopBits" << ui.stopBits->currentText();

	switch (ui.stopBits->currentIndex())
	{
	case 0:
		serial.setStopBits(QSerialPort::OneStop);
		break;
	case 1:
		serial.setStopBits(QSerialPort::OneAndHalfStop);
		break;
	case 2:
		serial.setStopBits(QSerialPort::TwoStop);
		break;
	default:
		break;
	}
	QString message = QString::fromLocal8Bit("设定串口：") + serial.portName() + QString::fromLocal8Bit(" 停止位为：") + ui.stopBits->currentText();
	ui.statusBar->showMessage(message);
}
void SerialPort::setFlowControl(){

	qDebug() << "setStopBits" << ui.flowControl->currentText();

	switch (ui.flowControl->currentIndex())
	{
	case 0:
		serial.setFlowControl(QSerialPort::NoFlowControl);
		break;
	case 1:
		serial.setFlowControl(QSerialPort::HardwareControl);
		break;
	case 2:
		serial.setFlowControl(QSerialPort::SoftwareControl);
		break;
	default:
		break;
	}
	QString message = QString::fromLocal8Bit("设定串口：") + serial.portName() + QString::fromLocal8Bit(" 流控制为：") + ui.flowControl->currentText();
	ui.statusBar->showMessage(message);
}

void SerialPort::openSerial(bool OpenFlag){
	qDebug() << "openSerial" << OpenFlag;// ui.openSerial;
	if (OpenFlag == true)
	{
		serial.open(QIODevice::ReadWrite);
		ui.serialPortNumber->setEnabled(false);
		ui.standardBaudRate->setEnabled(false);
		ui.dataBits->setEnabled(false);
		ui.parity->setEnabled(false);
		ui.stopBits->setEnabled(false);
		ui.flowControl->setEnabled(false);

		QString message = QString::fromLocal8Bit("打开串口：") + serial.portName();
		ui.statusBar->showMessage(message);
	}
	else
	{
		serial.close();

		serial.open(QIODevice::ReadWrite);
		ui.serialPortNumber->setEnabled(true);
		ui.standardBaudRate->setEnabled(true);
		ui.dataBits->setEnabled(true);
		ui.parity->setEnabled(true);
		ui.stopBits->setEnabled(true);
		ui.flowControl->setEnabled(true);
		QString message = QString::fromLocal8Bit("关闭串口：") + serial.portName();
		ui.statusBar->showMessage(message);
	}

}