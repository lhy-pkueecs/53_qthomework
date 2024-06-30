/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QPushButton *pushButton_6;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        calendarWidget = new QCalendarWidget(Widget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(270, 40, 331, 271));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(90, 290, 101, 31));
        listWidget = new QListWidget(Widget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(615, 51, 161, 441));
        listWidget->setSortingEnabled(false);
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(650, 500, 93, 28));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 320, 301, 271));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 281, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(320, 320, 291, 271));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 271, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 100, 261, 191));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 20, 241, 161));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 241, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(650, 540, 93, 28));

        retranslateUi(Widget);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Widget", "1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Widget", "2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Widget", "3", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Widget", "4", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Widget", "5", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Widget", "6", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Widget", "7", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Widget", "8", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("Widget", "9", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("Widget", "10", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("Widget", "11", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("Widget", "12", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("Widget", "13", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("Widget", "14", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("Widget", "15", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("Widget", "16", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("Widget", "17", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("Widget", "18", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("Widget", "19", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget->item(19);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("Widget", "20", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget->item(20);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("Widget", "21", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget->item(21);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("Widget", "22", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget->item(22);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("Widget", "23", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget->item(23);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("Widget", "24", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_6->setText(QCoreApplication::translate("Widget", "\345\200\222\350\256\241\346\227\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\275\223\346\227\245\344\272\213\351\241\271", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\344\272\213\351\241\271\347\232\204\346\227\245\346\234\237", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\244\207\346\263\250", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\275\223\346\227\245\344\272\213\351\241\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\346\227\245\344\272\213\351\241\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\346\227\266\351\227\264\344\272\213\351\241\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\346\227\266\351\227\264\344\272\213\351\241\271", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "\350\257\276\347\250\213\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
