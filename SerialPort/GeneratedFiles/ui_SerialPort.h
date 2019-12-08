/********************************************************************************
** Form generated from reading UI file 'SerialPort.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_H
#define UI_SERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPortClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_25;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox_9;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *checkBox_10;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *checkBox_11;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_11;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_12;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *checkBox_13;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_13;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *checkBox_14;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBox_15;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_15;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *checkBox_16;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_16;
    QHBoxLayout *horizontalLayout_22;
    QCheckBox *checkBox_17;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_17;
    QHBoxLayout *horizontalLayout_23;
    QCheckBox *checkBox_18;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_18;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *checkBox_21;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_10;
    QLabel *serialPortNumberLabel;
    QLabel *standardBaudRateLabel;
    QLabel *dataBitsLabel;
    QLabel *parityLabel;
    QLabel *stopBitsLabel;
    QLabel *FlowControlLabel;
    QVBoxLayout *verticalLayout;
    QComboBox *serialPortNumber;
    QComboBox *standardBaudRate;
    QComboBox *dataBits;
    QComboBox *parity;
    QComboBox *stopBits;
    QComboBox *flowControl;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *openSerial;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QLabel *label_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialPortClass)
    {
        if (SerialPortClass->objectName().isEmpty())
            SerialPortClass->setObjectName(QStringLiteral("SerialPortClass"));
        SerialPortClass->resize(986, 703);
        centralWidget = new QWidget(SerialPortClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        horizontalLayout_25->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        textBrowser_2 = new QTextBrowser(groupBox_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout_9->addWidget(textBrowser_2);


        horizontalLayout_25->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_24 = new QHBoxLayout(groupBox_3);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_28->addWidget(label_8);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(label_9);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_28->addWidget(label_10);

        horizontalLayout_28->setStretch(1, 6);
        horizontalLayout_28->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_28);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        checkBox_9 = new QCheckBox(groupBox_3);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        horizontalLayout_11->addWidget(checkBox_9);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_11->addWidget(lineEdit_2);

        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(pushButton_9);

        horizontalLayout_11->setStretch(1, 8);
        horizontalLayout_11->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_11);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        checkBox_10 = new QCheckBox(groupBox_3);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        horizontalLayout_15->addWidget(checkBox_10);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_15->addWidget(lineEdit_3);

        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(pushButton_10);

        horizontalLayout_15->setStretch(1, 8);
        horizontalLayout_15->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        checkBox_11 = new QCheckBox(groupBox_3);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        horizontalLayout_16->addWidget(checkBox_11);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_16->addWidget(lineEdit_4);

        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(pushButton_11);

        horizontalLayout_16->setStretch(1, 8);
        horizontalLayout_16->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        checkBox_12 = new QCheckBox(groupBox_3);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        horizontalLayout_17->addWidget(checkBox_12);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_17->addWidget(lineEdit_5);

        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(pushButton_12);

        horizontalLayout_17->setStretch(1, 8);
        horizontalLayout_17->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        checkBox_13 = new QCheckBox(groupBox_3);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        horizontalLayout_18->addWidget(checkBox_13);

        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_18->addWidget(lineEdit_6);

        pushButton_13 = new QPushButton(groupBox_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);

        horizontalLayout_18->addWidget(pushButton_13);

        horizontalLayout_18->setStretch(1, 8);
        horizontalLayout_18->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        checkBox_14 = new QCheckBox(groupBox_3);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        horizontalLayout_19->addWidget(checkBox_14);

        lineEdit_7 = new QLineEdit(groupBox_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_19->addWidget(lineEdit_7);

        pushButton_14 = new QPushButton(groupBox_3);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);

        horizontalLayout_19->addWidget(pushButton_14);

        horizontalLayout_19->setStretch(1, 8);
        horizontalLayout_19->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        checkBox_15 = new QCheckBox(groupBox_3);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));

        horizontalLayout_20->addWidget(checkBox_15);

        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_20->addWidget(lineEdit_8);

        pushButton_15 = new QPushButton(groupBox_3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(pushButton_15);

        horizontalLayout_20->setStretch(1, 8);
        horizontalLayout_20->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        checkBox_16 = new QCheckBox(groupBox_3);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));

        horizontalLayout_21->addWidget(checkBox_16);

        lineEdit_9 = new QLineEdit(groupBox_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_21->addWidget(lineEdit_9);

        pushButton_16 = new QPushButton(groupBox_3);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);

        horizontalLayout_21->addWidget(pushButton_16);

        horizontalLayout_21->setStretch(1, 8);
        horizontalLayout_21->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        checkBox_17 = new QCheckBox(groupBox_3);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));

        horizontalLayout_22->addWidget(checkBox_17);

        lineEdit_10 = new QLineEdit(groupBox_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout_22->addWidget(lineEdit_10);

        pushButton_17 = new QPushButton(groupBox_3);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);

        horizontalLayout_22->addWidget(pushButton_17);

        horizontalLayout_22->setStretch(1, 8);
        horizontalLayout_22->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        checkBox_18 = new QCheckBox(groupBox_3);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));

        horizontalLayout_23->addWidget(checkBox_18);

        lineEdit_11 = new QLineEdit(groupBox_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        horizontalLayout_23->addWidget(lineEdit_11);

        pushButton_18 = new QPushButton(groupBox_3);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);

        horizontalLayout_23->addWidget(pushButton_18);

        horizontalLayout_23->setStretch(1, 8);
        horizontalLayout_23->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_23);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        checkBox_21 = new QCheckBox(groupBox_3);
        checkBox_21->setObjectName(QStringLiteral("checkBox_21"));

        horizontalLayout_26->addWidget(checkBox_21);

        spinBox_2 = new QSpinBox(groupBox_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        horizontalLayout_26->addWidget(spinBox_2);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_26->addWidget(label_11);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        pushButton_21 = new QPushButton(groupBox_3);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        horizontalLayout_27->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(groupBox_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        horizontalLayout_27->addWidget(pushButton_22);

        pushButton_23 = new QPushButton(groupBox_3);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        horizontalLayout_27->addWidget(pushButton_23);


        verticalLayout_11->addLayout(horizontalLayout_27);


        horizontalLayout_24->addLayout(verticalLayout_11);


        horizontalLayout_25->addWidget(groupBox_3);

        horizontalLayout_25->setStretch(0, 8);
        horizontalLayout_25->setStretch(1, 8);
        horizontalLayout_25->setStretch(2, 1);

        gridLayout_3->addLayout(horizontalLayout_25, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        serialPortNumberLabel = new QLabel(groupBox_4);
        serialPortNumberLabel->setObjectName(QStringLiteral("serialPortNumberLabel"));
        serialPortNumberLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(serialPortNumberLabel);

        standardBaudRateLabel = new QLabel(groupBox_4);
        standardBaudRateLabel->setObjectName(QStringLiteral("standardBaudRateLabel"));
        standardBaudRateLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(standardBaudRateLabel);

        dataBitsLabel = new QLabel(groupBox_4);
        dataBitsLabel->setObjectName(QStringLiteral("dataBitsLabel"));
        dataBitsLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(dataBitsLabel);

        parityLabel = new QLabel(groupBox_4);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));
        parityLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(parityLabel);

        stopBitsLabel = new QLabel(groupBox_4);
        stopBitsLabel->setObjectName(QStringLiteral("stopBitsLabel"));
        stopBitsLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(stopBitsLabel);

        FlowControlLabel = new QLabel(groupBox_4);
        FlowControlLabel->setObjectName(QStringLiteral("FlowControlLabel"));
        FlowControlLabel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(FlowControlLabel);


        horizontalLayout->addLayout(verticalLayout_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        serialPortNumber = new QComboBox(groupBox_4);
        serialPortNumber->setObjectName(QStringLiteral("serialPortNumber"));
        serialPortNumber->setEnabled(true);
        serialPortNumber->setEditable(false);

        verticalLayout->addWidget(serialPortNumber);

        standardBaudRate = new QComboBox(groupBox_4);
        standardBaudRate->setObjectName(QStringLiteral("standardBaudRate"));
        standardBaudRate->setEditable(true);

        verticalLayout->addWidget(standardBaudRate);

        dataBits = new QComboBox(groupBox_4);
        dataBits->setObjectName(QStringLiteral("dataBits"));

        verticalLayout->addWidget(dataBits);

        parity = new QComboBox(groupBox_4);
        parity->setObjectName(QStringLiteral("parity"));

        verticalLayout->addWidget(parity);

        stopBits = new QComboBox(groupBox_4);
        stopBits->setObjectName(QStringLiteral("stopBits"));

        verticalLayout->addWidget(stopBits);

        flowControl = new QComboBox(groupBox_4);
        flowControl->setObjectName(QStringLiteral("flowControl"));

        verticalLayout->addWidget(flowControl);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_5);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        openSerial = new QPushButton(groupBox_5);
        openSerial->setObjectName(QStringLiteral("openSerial"));
        openSerial->setMinimumSize(QSize(0, 70));
        openSerial->setCheckable(true);

        horizontalLayout_7->addWidget(openSerial);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_8 = new QPushButton(groupBox_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);


        horizontalLayout_7->addLayout(verticalLayout_2);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox_8 = new QCheckBox(groupBox_5);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        verticalLayout_3->addWidget(checkBox_8);

        checkBox_2 = new QCheckBox(groupBox_5);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_3->addWidget(checkBox_2);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBox_3 = new QCheckBox(groupBox_5);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout_4->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox_5);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout_4->addWidget(checkBox_4);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_4 = new QPushButton(groupBox_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_5->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_5->addWidget(pushButton_5);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_6 = new QPushButton(groupBox_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_6->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(groupBox_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_6->addWidget(pushButton_7);


        horizontalLayout_8->addLayout(verticalLayout_6);


        horizontalLayout_13->addLayout(horizontalLayout_8);


        verticalLayout_8->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_6);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        checkBox = new QCheckBox(groupBox_6);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_9->addWidget(checkBox);

        spinBox = new QSpinBox(groupBox_6);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_9->addWidget(spinBox);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        checkBox_5 = new QCheckBox(groupBox_6);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_9->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(groupBox_6);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_9->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(groupBox_6);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        horizontalLayout_9->addWidget(checkBox_7);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEdit = new QLineEdit(groupBox_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_10->addWidget(lineEdit);

        pushButton_3 = new QPushButton(groupBox_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_10->addWidget(pushButton_3);


        verticalLayout_7->addLayout(horizontalLayout_10);


        horizontalLayout_14->addLayout(verticalLayout_7);


        verticalLayout_8->addWidget(groupBox_6);


        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);

        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        SerialPortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SerialPortClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 986, 23));
        SerialPortClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SerialPortClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SerialPortClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SerialPortClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SerialPortClass->setStatusBar(statusBar);

        retranslateUi(SerialPortClass);
        QObject::connect(serialPortNumber, SIGNAL(currentIndexChanged(QString)), SerialPortClass, SLOT(setSerialPortNumber()));
        QObject::connect(standardBaudRate, SIGNAL(currentIndexChanged(QString)), SerialPortClass, SLOT(setBaudRate()));
        QObject::connect(dataBits, SIGNAL(currentIndexChanged(QString)), SerialPortClass, SLOT(setDataBits()));
        QObject::connect(parity, SIGNAL(currentIndexChanged(int)), SerialPortClass, SLOT(setParity()));
        QObject::connect(stopBits, SIGNAL(currentIndexChanged(int)), SerialPortClass, SLOT(setStopBits()));
        QObject::connect(flowControl, SIGNAL(currentIndexChanged(int)), SerialPortClass, SLOT(setFlowControl()));
        QObject::connect(openSerial, SIGNAL(clicked(bool)), SerialPortClass, SLOT(openSerial(bool)));

        standardBaudRate->setCurrentIndex(1);
        dataBits->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SerialPortClass);
    } // setupUi

    void retranslateUi(QMainWindow *SerialPortClass)
    {
        SerialPortClass->setWindowTitle(QApplication::translate("SerialPortClass", "SerialPort", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SerialPortClass", "\346\216\245\346\224\266", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SerialPortClass", "\345\216\206\345\217\262\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SerialPortClass", "\345\244\232\346\226\207\346\234\254\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("SerialPortClass", "HEX", Q_NULLPTR));
        label_9->setText(QApplication::translate("SerialPortClass", "\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        label_10->setText(QApplication::translate("SerialPortClass", "\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_9->setText(QString());
        pushButton_9->setText(QApplication::translate("SerialPortClass", "1", Q_NULLPTR));
        checkBox_10->setText(QString());
        pushButton_10->setText(QApplication::translate("SerialPortClass", "2", Q_NULLPTR));
        checkBox_11->setText(QString());
        pushButton_11->setText(QApplication::translate("SerialPortClass", "3", Q_NULLPTR));
        checkBox_12->setText(QString());
        pushButton_12->setText(QApplication::translate("SerialPortClass", "4", Q_NULLPTR));
        checkBox_13->setText(QString());
        pushButton_13->setText(QApplication::translate("SerialPortClass", "5", Q_NULLPTR));
        checkBox_14->setText(QString());
        pushButton_14->setText(QApplication::translate("SerialPortClass", "6", Q_NULLPTR));
        checkBox_15->setText(QString());
        pushButton_15->setText(QApplication::translate("SerialPortClass", "7", Q_NULLPTR));
        checkBox_16->setText(QString());
        pushButton_16->setText(QApplication::translate("SerialPortClass", "8", Q_NULLPTR));
        checkBox_17->setText(QString());
        pushButton_17->setText(QApplication::translate("SerialPortClass", "9", Q_NULLPTR));
        checkBox_18->setText(QString());
        pushButton_18->setText(QApplication::translate("SerialPortClass", "10", Q_NULLPTR));
        checkBox_21->setText(QApplication::translate("SerialPortClass", "\345\276\252\347\216\257\345\217\221\351\200\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("SerialPortClass", "ms/\346\254\241", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SerialPortClass", "\344\270\262\345\217\243\344\277\241\346\201\257;", Q_NULLPTR));
        serialPortNumberLabel->setText(QApplication::translate("SerialPortClass", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        standardBaudRateLabel->setText(QApplication::translate("SerialPortClass", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        dataBitsLabel->setText(QApplication::translate("SerialPortClass", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        parityLabel->setText(QApplication::translate("SerialPortClass", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        stopBitsLabel->setText(QApplication::translate("SerialPortClass", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        FlowControlLabel->setText(QApplication::translate("SerialPortClass", "\346\265\201\346\216\247\346\226\271\345\274\217\357\274\232", Q_NULLPTR));
        standardBaudRate->clear();
        standardBaudRate->insertItems(0, QStringList()
         << QApplication::translate("SerialPortClass", "4800", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "9600", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "14400", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "19200", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "38400", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "56000", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "57600", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "115200", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "128000", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "256000", Q_NULLPTR)
        );
        dataBits->clear();
        dataBits->insertItems(0, QStringList()
         << QApplication::translate("SerialPortClass", "5", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "6", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "7", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "8", Q_NULLPTR)
        );
        parity->clear();
        parity->insertItems(0, QStringList()
         << QApplication::translate("SerialPortClass", "NoParity", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "EvenParity", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "OddParity", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "SpaceParity", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "MarkParity", Q_NULLPTR)
        );
        stopBits->clear();
        stopBits->insertItems(0, QStringList()
         << QApplication::translate("SerialPortClass", "OneStop", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "OneAndHalfStop", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "TwoStop", Q_NULLPTR)
        );
        flowControl->clear();
        flowControl->insertItems(0, QStringList()
         << QApplication::translate("SerialPortClass", "NoFlowControl", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "HardwareControl", Q_NULLPTR)
         << QApplication::translate("SerialPortClass", "SoftwareControl", Q_NULLPTR)
        );
        groupBox_5->setTitle(QApplication::translate("SerialPortClass", "\345\212\237\350\203\275\351\200\211\345\256\232\357\274\232", Q_NULLPTR));
        openSerial->setText(QApplication::translate("SerialPortClass", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SerialPortClass", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("SerialPortClass", "\344\277\235\345\255\230\346\216\245\346\224\266", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SerialPortClass", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("SerialPortClass", "PushButton", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("SerialPortClass", "\346\216\247\345\210\266\345\214\272\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        label_7->setText(QApplication::translate("SerialPortClass", "TextLabel", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("SerialPortClass", "CheckBox", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SerialPortClass", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SerialPortClass: public Ui_SerialPortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_H
