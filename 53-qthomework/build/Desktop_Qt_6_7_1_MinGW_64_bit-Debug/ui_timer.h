/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QTimeEdit *timeEdit;
    QGroupBox *groupBox_2;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdMinute;
    QLCDNumber *lcdSecond;

    void setupUi(QWidget *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName("timer");
        timer->resize(517, 359);
        groupBox = new QGroupBox(timer);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 471, 161));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 41, 20));
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName("btnStart");
        btnStart->setGeometry(QRect(230, 70, 93, 28));
        btnStop = new QPushButton(groupBox);
        btnStop->setObjectName("btnStop");
        btnStop->setGeometry(QRect(340, 70, 93, 28));
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setEnabled(true);
        timeEdit->setGeometry(QRect(80, 70, 118, 25));
        groupBox_2 = new QGroupBox(timer);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 190, 471, 151));
        lcdHour = new QLCDNumber(groupBox_2);
        lcdHour->setObjectName("lcdHour");
        lcdHour->setGeometry(QRect(30, 30, 111, 91));
        lcdMinute = new QLCDNumber(groupBox_2);
        lcdMinute->setObjectName("lcdMinute");
        lcdMinute->setGeometry(QRect(170, 30, 111, 91));
        lcdSecond = new QLCDNumber(groupBox_2);
        lcdSecond->setObjectName("lcdSecond");
        lcdSecond->setGeometry(QRect(310, 30, 111, 91));

        retranslateUi(timer);

        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QWidget *timer)
    {
        timer->setWindowTitle(QCoreApplication::translate("timer", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("timer", "\350\256\276\347\275\256\345\200\222\350\256\241\346\227\266", nullptr));
        label->setText(QCoreApplication::translate("timer", "\346\227\266\351\227\264", nullptr));
        btnStart->setText(QCoreApplication::translate("timer", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("timer", "\346\232\202\345\201\234", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("timer", "\350\256\241\346\227\266\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
