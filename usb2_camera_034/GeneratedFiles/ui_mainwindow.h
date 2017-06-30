/********************************************************************************
** Form generated from reading UI file 'mainwindowqHp152.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWQHP152_H
#define MAINWINDOWQHP152_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QFrame *m_showFrame;
    QGridLayout *gridLayout;
    QLabel *m_showLabel;
    QPushButton *m_startButton;
    QPushButton *m_stopButton;
    QPushButton *m_pauseButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *m_pathChoosingButton;
    QPushButton *m_imageTakingButton;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *m_analogGainSet;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *m_digitalGainSet;
    QGroupBox *m_exposureMode;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *m_autoExposure;
    QRadioButton *m_manualExposure;
    QHBoxLayout *horizontalLayout_12;
    QSlider *m_exposureSlider;
    QSpinBox *m_exposureSpinBox;
    QGroupBox *m_spectrometerCtrl;
    QGridLayout *gridLayout_2;
    QSlider *m_wavelengthSlider;
    QPushButton *m_openSpectrometerButton;
    QSpinBox *m_wavelengthSpinBox;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLabel *m_labelForPos;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_receiveRateLabel;
    QLabel *label_4;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLabel *label_3;
    QGroupBox *m_captureSpectrumBox;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QSpinBox *m_capMinWavelen;
    QLabel *label_7;
    QSpinBox *m_capMaxWavelen;
    QLabel *label_10;
    QLabel *label_9;
    QSpinBox *m_stepOfWavelen;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *m_captureSpectrum;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *m_rangeOfWavelen;
    QPushButton *m_horizontalMirror;
    QPushButton *m_verticalMirror;
    QCheckBox *m_lowIlluminationCheck;
    QPushButton *m_spectrumAnalysis;
    QPushButton *m_getReference;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QSpinBox *m_lowRef;
    QLabel *label_2;
    QSpinBox *m_highRef;
    QPushButton *m_boundaryRefSet;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1006, 896);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_showFrame = new QFrame(centralWidget);
        m_showFrame->setObjectName(QStringLiteral("m_showFrame"));
        m_showFrame->setGeometry(QRect(20, 240, 640, 480));
        m_showFrame->setStyleSheet(QStringLiteral("background-color: rgb(130, 130, 130)"));
        m_showFrame->setFrameShape(QFrame::StyledPanel);
        m_showFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_showFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_showLabel = new QLabel(m_showFrame);
        m_showLabel->setObjectName(QStringLiteral("m_showLabel"));
        m_showLabel->setFrameShape(QFrame::NoFrame);
        m_showLabel->setLineWidth(0);
        m_showLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_showLabel, 0, 0, 1, 1);

        m_startButton = new QPushButton(centralWidget);
        m_startButton->setObjectName(QStringLiteral("m_startButton"));
        m_startButton->setGeometry(QRect(40, 30, 121, 28));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        m_startButton->setFont(font);
        m_startButton->setFlat(false);
        m_stopButton = new QPushButton(centralWidget);
        m_stopButton->setObjectName(QStringLiteral("m_stopButton"));
        m_stopButton->setEnabled(false);
        m_stopButton->setGeometry(QRect(40, 70, 121, 28));
        m_stopButton->setFont(font);
        m_pauseButton = new QPushButton(centralWidget);
        m_pauseButton->setObjectName(QStringLiteral("m_pauseButton"));
        m_pauseButton->setEnabled(false);
        m_pauseButton->setGeometry(QRect(40, 110, 121, 28));
        m_pauseButton->setFont(font);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(250, 30, 171, 105));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        groupBox_5->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        m_pathChoosingButton = new QPushButton(groupBox_5);
        m_pathChoosingButton->setObjectName(QStringLiteral("m_pathChoosingButton"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        m_pathChoosingButton->setFont(font2);

        verticalLayout_6->addWidget(m_pathChoosingButton);

        m_imageTakingButton = new QPushButton(groupBox_5);
        m_imageTakingButton->setObjectName(QStringLiteral("m_imageTakingButton"));
        m_imageTakingButton->setEnabled(false);
        m_imageTakingButton->setFont(font2);

        verticalLayout_6->addWidget(m_imageTakingButton);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setGeometry(QRect(200, 160, 251, 63));
        groupBox_3->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        m_analogGainSet = new QComboBox(groupBox_3);
        m_analogGainSet->setObjectName(QStringLiteral("m_analogGainSet"));
        m_analogGainSet->setEnabled(false);
        m_analogGainSet->setFont(font2);

        horizontalLayout_6->addWidget(m_analogGainSet);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(490, 160, 271, 66));
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_digitalGainSet = new QComboBox(groupBox);
        m_digitalGainSet->setObjectName(QStringLiteral("m_digitalGainSet"));
        m_digitalGainSet->setEnabled(false);
        m_digitalGainSet->setFont(font2);

        verticalLayout_3->addWidget(m_digitalGainSet);

        m_exposureMode = new QGroupBox(centralWidget);
        m_exposureMode->setObjectName(QStringLiteral("m_exposureMode"));
        m_exposureMode->setEnabled(false);
        m_exposureMode->setGeometry(QRect(490, 30, 311, 118));
        m_exposureMode->setFont(font);
        verticalLayout_4 = new QVBoxLayout(m_exposureMode);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_autoExposure = new QRadioButton(m_exposureMode);
        m_autoExposure->setObjectName(QStringLiteral("m_autoExposure"));
        m_autoExposure->setFont(font2);
        m_autoExposure->setChecked(true);

        verticalLayout_4->addWidget(m_autoExposure);

        m_manualExposure = new QRadioButton(m_exposureMode);
        m_manualExposure->setObjectName(QStringLiteral("m_manualExposure"));
        m_manualExposure->setFont(font2);

        verticalLayout_4->addWidget(m_manualExposure);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        m_exposureSlider = new QSlider(m_exposureMode);
        m_exposureSlider->setObjectName(QStringLiteral("m_exposureSlider"));
        m_exposureSlider->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_exposureSlider->sizePolicy().hasHeightForWidth());
        m_exposureSlider->setSizePolicy(sizePolicy);
        m_exposureSlider->setMaximumSize(QSize(16777215, 16777215));
        m_exposureSlider->setMinimum(1);
        m_exposureSlider->setMaximum(500);
        m_exposureSlider->setSingleStep(1);
        m_exposureSlider->setTracking(false);
        m_exposureSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(m_exposureSlider);

        m_exposureSpinBox = new QSpinBox(m_exposureMode);
        m_exposureSpinBox->setObjectName(QStringLiteral("m_exposureSpinBox"));
        m_exposureSpinBox->setEnabled(false);
        m_exposureSpinBox->setFont(font2);
        m_exposureSpinBox->setAlignment(Qt::AlignCenter);
        m_exposureSpinBox->setReadOnly(true);
        m_exposureSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        m_exposureSpinBox->setKeyboardTracking(false);
        m_exposureSpinBox->setMinimum(1);
        m_exposureSpinBox->setMaximum(500);

        horizontalLayout_12->addWidget(m_exposureSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_12);

        m_spectrometerCtrl = new QGroupBox(centralWidget);
        m_spectrometerCtrl->setObjectName(QStringLiteral("m_spectrometerCtrl"));
        m_spectrometerCtrl->setEnabled(true);
        m_spectrometerCtrl->setGeometry(QRect(10, 740, 781, 121));
        gridLayout_2 = new QGridLayout(m_spectrometerCtrl);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_wavelengthSlider = new QSlider(m_spectrometerCtrl);
        m_wavelengthSlider->setObjectName(QStringLiteral("m_wavelengthSlider"));
        m_wavelengthSlider->setEnabled(false);
        m_wavelengthSlider->setMinimum(420);
        m_wavelengthSlider->setMaximum(760);
        m_wavelengthSlider->setSingleStep(10);
        m_wavelengthSlider->setTracking(false);
        m_wavelengthSlider->setOrientation(Qt::Horizontal);
        m_wavelengthSlider->setTickPosition(QSlider::TicksBelow);
        m_wavelengthSlider->setTickInterval(0);

        gridLayout_2->addWidget(m_wavelengthSlider, 2, 1, 1, 4);

        m_openSpectrometerButton = new QPushButton(m_spectrometerCtrl);
        m_openSpectrometerButton->setObjectName(QStringLiteral("m_openSpectrometerButton"));
        m_openSpectrometerButton->setEnabled(false);

        gridLayout_2->addWidget(m_openSpectrometerButton, 1, 0, 1, 1);

        m_wavelengthSpinBox = new QSpinBox(m_spectrometerCtrl);
        m_wavelengthSpinBox->setObjectName(QStringLiteral("m_wavelengthSpinBox"));
        m_wavelengthSpinBox->setAlignment(Qt::AlignCenter);
        m_wavelengthSpinBox->setReadOnly(true);
        m_wavelengthSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        m_wavelengthSpinBox->setAccelerated(false);
        m_wavelengthSpinBox->setKeyboardTracking(false);
        m_wavelengthSpinBox->setMinimum(420);
        m_wavelengthSpinBox->setMaximum(760);
        m_wavelengthSpinBox->setSingleStep(10);

        gridLayout_2->addWidget(m_wavelengthSpinBox, 2, 5, 1, 1);

        label_5 = new QLabel(m_spectrometerCtrl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        m_labelForPos = new QLabel(m_spectrometerCtrl);
        m_labelForPos->setObjectName(QStringLiteral("m_labelForPos"));

        gridLayout_2->addWidget(m_labelForPos, 3, 0, 1, 6);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 150, 151, 81));
        horizontalLayout_13 = new QHBoxLayout(groupBox_6);
        horizontalLayout_13->setSpacing(3);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_receiveRateLabel = new QLabel(groupBox_2);
        m_receiveRateLabel->setObjectName(QStringLiteral("m_receiveRateLabel"));
        m_receiveRateLabel->setLayoutDirection(Qt::LeftToRight);
        m_receiveRateLabel->setTextFormat(Qt::AutoText);
        m_receiveRateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_receiveRateLabel);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);


        horizontalLayout_13->addWidget(groupBox_2);

        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFont(font);
        horizontalLayout_14 = new QHBoxLayout(groupBox_7);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_6 = new QLabel(groupBox_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_6);

        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_14->addWidget(label_3);


        horizontalLayout_13->addWidget(groupBox_7);

        m_captureSpectrumBox = new QGroupBox(centralWidget);
        m_captureSpectrumBox->setObjectName(QStringLiteral("m_captureSpectrumBox"));
        m_captureSpectrumBox->setEnabled(false);
        m_captureSpectrumBox->setGeometry(QRect(680, 350, 191, 181));
        gridLayout_3 = new QGridLayout(m_captureSpectrumBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_8 = new QLabel(m_captureSpectrumBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        m_capMinWavelen = new QSpinBox(m_captureSpectrumBox);
        m_capMinWavelen->setObjectName(QStringLiteral("m_capMinWavelen"));
        m_capMinWavelen->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_3->addWidget(m_capMinWavelen, 0, 1, 1, 1);

        label_7 = new QLabel(m_captureSpectrumBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        m_capMaxWavelen = new QSpinBox(m_captureSpectrumBox);
        m_capMaxWavelen->setObjectName(QStringLiteral("m_capMaxWavelen"));
        m_capMaxWavelen->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_3->addWidget(m_capMaxWavelen, 1, 1, 1, 1);

        label_10 = new QLabel(m_captureSpectrumBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 1, 2, 1, 1);

        label_9 = new QLabel(m_captureSpectrumBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 2, 1, 1);

        m_stepOfWavelen = new QSpinBox(m_captureSpectrumBox);
        m_stepOfWavelen->setObjectName(QStringLiteral("m_stepOfWavelen"));
        m_stepOfWavelen->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        m_stepOfWavelen->setMinimum(0);
        m_stepOfWavelen->setMaximum(99);
        m_stepOfWavelen->setValue(0);

        gridLayout_3->addWidget(m_stepOfWavelen, 2, 1, 1, 1);

        label_11 = new QLabel(m_captureSpectrumBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(m_captureSpectrumBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 2, 2, 1, 1);

        m_captureSpectrum = new QPushButton(m_captureSpectrumBox);
        m_captureSpectrum->setObjectName(QStringLiteral("m_captureSpectrum"));

        gridLayout_3->addWidget(m_captureSpectrum, 4, 1, 1, 1);

        label_13 = new QLabel(m_captureSpectrumBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        label_14 = new QLabel(m_captureSpectrumBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 3, 2, 1, 1);

        m_rangeOfWavelen = new QLabel(m_captureSpectrumBox);
        m_rangeOfWavelen->setObjectName(QStringLiteral("m_rangeOfWavelen"));
        m_rangeOfWavelen->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(m_rangeOfWavelen, 3, 1, 1, 1);

        m_horizontalMirror = new QPushButton(centralWidget);
        m_horizontalMirror->setObjectName(QStringLiteral("m_horizontalMirror"));
        m_horizontalMirror->setGeometry(QRect(680, 250, 93, 28));
        m_verticalMirror = new QPushButton(centralWidget);
        m_verticalMirror->setObjectName(QStringLiteral("m_verticalMirror"));
        m_verticalMirror->setGeometry(QRect(680, 300, 93, 28));
        m_lowIlluminationCheck = new QCheckBox(centralWidget);
        m_lowIlluminationCheck->setObjectName(QStringLiteral("m_lowIlluminationCheck"));
        m_lowIlluminationCheck->setGeometry(QRect(680, 700, 91, 19));
        m_spectrumAnalysis = new QPushButton(centralWidget);
        m_spectrumAnalysis->setObjectName(QStringLiteral("m_spectrumAnalysis"));
        m_spectrumAnalysis->setGeometry(QRect(790, 300, 93, 28));
        m_getReference = new QPushButton(centralWidget);
        m_getReference->setObjectName(QStringLiteral("m_getReference"));
        m_getReference->setEnabled(false);
        m_getReference->setGeometry(QRect(790, 250, 93, 28));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(680, 550, 201, 123));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        m_lowRef = new QSpinBox(groupBox_4);
        m_lowRef->setObjectName(QStringLiteral("m_lowRef"));
        m_lowRef->setMaximum(4096);

        gridLayout_4->addWidget(m_lowRef, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        m_highRef = new QSpinBox(groupBox_4);
        m_highRef->setObjectName(QStringLiteral("m_highRef"));
        m_highRef->setMaximum(4096);

        gridLayout_4->addWidget(m_highRef, 1, 1, 1, 1);

        m_boundaryRefSet = new QPushButton(groupBox_4);
        m_boundaryRefSet->setObjectName(QStringLiteral("m_boundaryRefSet"));

        gridLayout_4->addWidget(m_boundaryRefSet, 2, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        m_analogGainSet->setCurrentIndex(0);
        m_digitalGainSet->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "\346\210\220\345\203\217\345\205\211\350\260\261\344\273\252\346\265\213\350\257\225\350\275\257\344\273\266", 0));
        m_showLabel->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272", 0));
        m_startButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\347\233\270\346\234\272", 0));
        m_stopButton->setText(QApplication::translate("MainWindowClass", "\345\205\263\351\227\255\347\233\270\346\234\272", 0));
        m_pauseButton->setText(QApplication::translate("MainWindowClass", "\346\232\202\345\201\234", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindowClass", "\344\277\235\345\255\230", 0));
        m_pathChoosingButton->setText(QApplication::translate("MainWindowClass", "\351\200\211\346\213\251\345\255\230\345\202\250\350\267\257\345\276\204", 0));
        m_imageTakingButton->setText(QApplication::translate("MainWindowClass", "\346\213\215\347\205\247", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindowClass", "\346\250\241\346\213\237\345\242\236\347\233\212", 0));
        m_analogGainSet->clear();
        m_analogGainSet->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "2\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "4\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "8\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "10\345\200\215", 0)
        );
        groupBox->setTitle(QApplication::translate("MainWindowClass", "\346\225\260\345\255\227\345\242\236\347\233\212", 0));
        m_digitalGainSet->clear();
        m_digitalGainSet->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "2\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "3\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "4\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "5\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "6\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "7\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "8\345\200\215", 0)
        );
        m_exposureMode->setTitle(QApplication::translate("MainWindowClass", "\346\233\235\345\205\211\350\256\276\347\275\256", 0));
        m_autoExposure->setText(QApplication::translate("MainWindowClass", "\350\207\252\345\212\250", 0));
        m_manualExposure->setText(QApplication::translate("MainWindowClass", "\346\211\213\345\212\250(\346\233\235\345\205\211\345\200\274)", 0));
        m_exposureSpinBox->setSuffix(QApplication::translate("MainWindowClass", " ms", 0));
        m_spectrometerCtrl->setTitle(QApplication::translate("MainWindowClass", "\345\205\211\350\260\261\344\273\252\346\223\215\344\275\234", 0));
        m_openSpectrometerButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\345\205\211\350\260\261\344\273\252", 0));
        label_5->setText(QApplication::translate("MainWindowClass", "\346\263\242\351\225\277/nm", 0));
        m_labelForPos->setText(QString());
        groupBox_6->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "\345\270\247\347\216\207", 0));
        m_receiveRateLabel->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_4->setText(QApplication::translate("MainWindowClass", "fps", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindowClass", "\346\270\251\345\272\246", 0));
        label_6->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_3->setText(QApplication::translate("MainWindowClass", "\342\204\203", 0));
        m_captureSpectrumBox->setTitle(QApplication::translate("MainWindowClass", "\346\212\223\345\217\226\345\205\211\350\260\261\345\233\276\345\203\217", 0));
        label_8->setText(QApplication::translate("MainWindowClass", "\347\273\210\346\255\242\346\263\242\351\225\277", 0));
        label_7->setText(QApplication::translate("MainWindowClass", "\350\265\267\345\247\213\346\263\242\351\225\277", 0));
        label_10->setText(QApplication::translate("MainWindowClass", "nm", 0));
        label_9->setText(QApplication::translate("MainWindowClass", "nm", 0));
        label_11->setText(QApplication::translate("MainWindowClass", "\346\263\242\351\225\277\351\227\264\351\232\224", 0));
        label_12->setText(QApplication::translate("MainWindowClass", "nm", 0));
        m_captureSpectrum->setText(QApplication::translate("MainWindowClass", "\345\274\200\345\247\213\346\212\223\345\217\226", 0));
        label_13->setText(QApplication::translate("MainWindowClass", "\346\263\242\351\225\277\350\214\203\345\233\264", 0));
        label_14->setText(QApplication::translate("MainWindowClass", "nm", 0));
        m_rangeOfWavelen->setText(QApplication::translate("MainWindowClass", "-", 0));
        m_horizontalMirror->setText(QApplication::translate("MainWindowClass", "\346\260\264\345\271\263\351\225\234\345\203\217", 0));
        m_verticalMirror->setText(QApplication::translate("MainWindowClass", "\347\253\226\347\233\264\351\225\234\345\203\217", 0));
        m_lowIlluminationCheck->setText(QApplication::translate("MainWindowClass", "\344\275\216\347\205\247\345\272\246", 0));
        m_spectrumAnalysis->setText(QApplication::translate("MainWindowClass", "\345\205\211\350\260\261\345\210\206\346\236\220", 0));
        m_getReference->setText(QApplication::translate("MainWindowClass", "\350\216\267\345\217\226\345\217\202\350\200\203\345\205\211", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindowClass", "\345\217\202\350\200\203\345\205\211\344\270\212\344\270\213\347\225\214", 0));
        label->setText(QApplication::translate("MainWindowClass", "\344\270\213\347\225\214", 0));
        label_2->setText(QApplication::translate("MainWindowClass", "\344\270\212\347\225\214", 0));
        m_boundaryRefSet->setText(QApplication::translate("MainWindowClass", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWQHP152_H
