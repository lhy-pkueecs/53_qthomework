#include "timetable.h"
#include "ui_timetable.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

timetable::timetable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::timetable)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(7);
    ui->tableWidget->setColumnCount(12);
    QStringList daysOfWeek = {"星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期天"};
    ui->tableWidget->setVerticalHeaderLabels(daysOfWeek);
    for (int i = 0; i < 12; ++i) {
        ui->tableWidget->setHorizontalHeaderItem(i, new QTableWidgetItem(QString::number(i + 1)));
    }
    for (int i = 0; i < ui->tableWidget->columnCount(); ++i) {
        ui->tableWidget->setColumnWidth(i, 50);
    }
    loadCSV("timetable.csv");
}

timetable::~timetable()
{
    delete ui;
}
void timetable::loadCSV(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "错误", "无法打开文件进行读取。");
        return;
    }

    QTextStream in(&file);
    int row = 0;
    while (!in.atEnd() && row < 7) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        for (int col = 0; col < fields.size() && col < 12; ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(fields[col]));
        }
        ++row;
    }

    file.close();
}
void timetable::saveCSV(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "错误", "无法打开文件进行写入。");
        return;
    }

    QTextStream out(&file);
    for (int row = 0; row < 7; ++row) {
        QStringList rowContent;
        for (int col = 0; col < 12; ++col) {
            QTableWidgetItem *item = ui->tableWidget->item(row, col);
            rowContent << (item ? item->text() : "");
        }
        out << rowContent.join(",") << "\n";
    }

    file.close();
}
void timetable::on_saveButton_clicked()
{
    saveCSV("timetable.csv");
    QMessageBox::information(this, "保存", "课程表保存成功。");
}

