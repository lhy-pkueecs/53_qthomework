/********************************************************************************
** Form generated from reading UI file 'timetable.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLE_H
#define UI_TIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timetable
{
public:
    QTableWidget *tableWidget;
    QPushButton *saveButton;

    void setupUi(QWidget *timetable)
    {
        if (timetable->objectName().isEmpty())
            timetable->setObjectName("timetable");
        timetable->resize(653, 322);
        tableWidget = new QTableWidget(timetable);
        if (tableWidget->columnCount() < 13)
            tableWidget->setColumnCount(13);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 631, 271));
        tableWidget->setRowCount(7);
        tableWidget->setColumnCount(13);
        saveButton = new QPushButton(timetable);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(270, 290, 93, 28));

        retranslateUi(timetable);

        QMetaObject::connectSlotsByName(timetable);
    } // setupUi

    void retranslateUi(QWidget *timetable)
    {
        timetable->setWindowTitle(QCoreApplication::translate("timetable", "Form", nullptr));
        saveButton->setText(QCoreApplication::translate("timetable", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timetable: public Ui_timetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLE_H
