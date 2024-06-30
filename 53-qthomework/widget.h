
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

#include <QApplication>
// checkbox
#include <QCheckBox>
#include <QVBoxLayout>
// 对话框
#include <QInputDialog>
#include <QDate>
#include "file.h"
#include "timer.h"
#include "timetable.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    timer* ppage2=NULL;
    timetable* ppage3=NULL;

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();


    void on_pushButton_4_released();

    void on_pushButton_5_released();


    void on_pushButton_6_released();

    void on_pushButton_7_released();

private:
    Ui::Widget *ui;
    int year;
    int month;
    int day;

    QString datapath = "C:/Users/BY/Desktop/chengshe/qt/untitled1/";

};

#endif // WIDGET_H
