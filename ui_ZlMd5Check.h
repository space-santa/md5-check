/********************************************************************************
** Form generated from reading UI file 'ZlMd5Check.ui'
**
** Created: Fri Dec 11 20:30:07 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZLMD5CHECK_H
#define UI_ZLMD5CHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionInfo;
    QAction *actionQuit;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLineEdit *lineEdit_Source;
    QPushButton *pushButton_Open;
    QLineEdit *lineEdit_Source2;
    QPushButton *pushButton_Open2;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_Calc;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QLineEdit *lineEdit_Result;
    QLineEdit *lineEdit_Result2;
    QLabel *label_Match;
    QSpacerItem *spacerItem2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(319, 332);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/Icons/filenew.png"));
        actionNew->setIcon(icon);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/Icons/messagebox_info.png"));
        actionInfo->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/Icons/exit.png"));
        actionQuit->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/Icons/filesave.png"));
        actionSave->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        lineEdit_Source = new QLineEdit(groupBox_2);
        lineEdit_Source->setObjectName(QString::fromUtf8("lineEdit_Source"));

        gridLayout1->addWidget(lineEdit_Source, 0, 0, 1, 1);

        pushButton_Open = new QPushButton(groupBox_2);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/Icons/fileopen.png"));
        pushButton_Open->setIcon(icon4);

        gridLayout1->addWidget(pushButton_Open, 0, 1, 1, 1);

        lineEdit_Source2 = new QLineEdit(groupBox_2);
        lineEdit_Source2->setObjectName(QString::fromUtf8("lineEdit_Source2"));

        gridLayout1->addWidget(lineEdit_Source2, 1, 0, 1, 1);

        pushButton_Open2 = new QPushButton(groupBox_2);
        pushButton_Open2->setObjectName(QString::fromUtf8("pushButton_Open2"));
        pushButton_Open2->setIcon(icon4);

        gridLayout1->addWidget(pushButton_Open2, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        pushButton_Calc = new QPushButton(centralwidget);
        pushButton_Calc->setObjectName(QString::fromUtf8("pushButton_Calc"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/Icons/roll.png"));
        pushButton_Calc->setIcon(icon5);

        gridLayout->addWidget(pushButton_Calc, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        lineEdit_Result = new QLineEdit(groupBox);
        lineEdit_Result->setObjectName(QString::fromUtf8("lineEdit_Result"));

        gridLayout2->addWidget(lineEdit_Result, 0, 0, 1, 1);

        lineEdit_Result2 = new QLineEdit(groupBox);
        lineEdit_Result2->setObjectName(QString::fromUtf8("lineEdit_Result2"));

        gridLayout2->addWidget(lineEdit_Result2, 1, 0, 1, 1);

        label_Match = new QLabel(groupBox);
        label_Match->setObjectName(QString::fromUtf8("label_Match"));

        gridLayout2->addWidget(label_Match, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 3);

        spacerItem2 = new QSpacerItem(301, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 3, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);

        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionInfo);
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "new", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "info", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "quit", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "save", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Files", 0, QApplication::UnicodeUTF8));
        pushButton_Open->setText(QApplication::translate("MainWindow", "File 1", 0, QApplication::UnicodeUTF8));
        pushButton_Open2->setText(QApplication::translate("MainWindow", "File 2", 0, QApplication::UnicodeUTF8));
        pushButton_Calc->setText(QApplication::translate("MainWindow", "get md5sum", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Result", 0, QApplication::UnicodeUTF8));
        label_Match->setText(QApplication::translate("MainWindow", "match", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLMD5CHECK_H
