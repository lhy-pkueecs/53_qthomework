
#include "widget.h"
#include "ui_widget.h"
#include <QDate>
#include <QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->ppage2=new timer;
    this->ppage3=new timetable;


    QDate currentDate = ui->calendarWidget->selectedDate();
    int currentMonth = currentDate.month();
    qDebug() << "当前月份：" << currentMonth;




    ui->verticalLayout_2->setAlignment(Qt::AlignTop);
    ui->verticalLayout->setAlignment(Qt::AlignTop);

    file f;
    QString filename = datapath + "note.csv";
    f.read_matrix(filename,"无");
    for(int i=0;i<f.content_rows_num;i++){
        if(f.units[i][1]!=""||f.units[i][2]!=""||f.units[i][3]!=""){
            QLabel *label = new QLabel(f.units[i][0]);
            ui->verticalLayout_2->addWidget(label);
        }
        QLabel *label = new QLabel(f.units[i][0]);

        label->setStyleSheet("background-color: white;");
    }

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_calendarWidget_clicked(const QDate &date)
{

    year = date.year();
    month = date.month();
    day = date.day();
    for(int k=1;k<=24;k++){
        QListWidgetItem *item = ui->listWidget->item(k-1);
        item->setText(QString::number(k));
    }
    for (int i = 0; i < ui->verticalLayout->count(); ++i) {
        QLayoutItem* item = ui->verticalLayout->itemAt(i);
        QWidget* widget = item->widget();
        if (widget && widget->inherits("QCheckBox")) {
            ui->verticalLayout->removeWidget(widget);
            delete widget;
        }
    }
    ui->textEdit->clear();

    qDebug() << "日期被点击:" << "年份：" << year<< "月份：" << month << "日期：" << day;


    file f;
    QString filename = datapath + "note.csv";
    f.read_matrix(filename,"无");




    for(int i=0;i<f.content_rows_num;i++){

        QStringList temp = f.units[i][0].split("-");
        qDebug()<<temp;
        bool condition1 = temp[0].toInt() == year;
        bool condition2 = temp[1].toInt() == month;
        bool condition3 = temp[2].toInt() == day;
        qDebug()<<"日期";
        if(condition1 && condition2 && condition3 ){

            ui->textEdit->setText(f.units[i][1]);
            qDebug()<<"第一项";

            QStringList temp20 = f.units[i][2].split("丨");
            qDebug()<<temp20.size();
            // for (int i = 0; i < ui->verticalLayout->count(); ++i) {
            //     QLayoutItem* item = ui->verticalLayout->itemAt(i);
            //     QWidget* widget = item->widget();
            //     if (widget && widget->inherits("QCheckBox")) {
            //         ui->verticalLayout->removeWidget(widget);
            //         delete widget;
            //     }
            // }
            for(int j=0;j<temp20.size();j++){
                QStringList temp21 = temp20[j].split("-");
                if(temp20==temp21){
                    break;
                }
                QCheckBox *checkBox = new QCheckBox(temp21[1]);
                if(temp21[0]=="1"){
                    checkBox->setChecked(true);
                }
                ui->verticalLayout->addWidget(checkBox);

            }
            qDebug()<<"第二项";
            //显示 每日计划
            // for(int k=1;k<=24;k++){
            //         QListWidgetItem *item = ui->listWidget->item(k-1);
            //         item->setText(QString::number(k));
            //     }

            QStringList temp30 = f.units[i][3].split("丨");
            for(int j=0;j<temp30.size();j++){
                QStringList temp31 = temp30[j].split("-");
                if(temp30==temp31){
                    break;
                }
                int tempNum = temp31[0].toInt();
                for(int k=1;k<=24;k++){
                    if(tempNum == k){
                        QListWidgetItem *item = ui->listWidget->item(k-1);
                        item->setText(QString::number(k)+"-"+temp31[1]);
                    }
                }
            }

        }
    }
}


void Widget::on_pushButton_released()
{

    bool ok;
    QString text = QInputDialog::getText(nullptr, "输入框", "请输入该日要完成的事项:", QLineEdit::Normal, "", &ok);

    if (ok && !text.isEmpty()) {
        qDebug() << "用户输入的文本为:" << text;
        QCheckBox *checkBox = new QCheckBox(text);
        ui->verticalLayout->addWidget(checkBox);
    } else {
        qDebug() << "用户取消了输入";
    }
}



void Widget::on_pushButton_2_released()
{
    QString time;
    QString event;
    for(int i = 0;i<2;i++){

        bool ok;
        QString text;
        if(i == 0)text = QInputDialog::getText(nullptr, "输入框", "请输入事项时间：小时:", QLineEdit::Normal, "", &ok);
        if(i == 1)text = QInputDialog::getText(nullptr, "输入框", "请输入事项内容:", QLineEdit::Normal, "", &ok);

        if (ok && !text.isEmpty()) {
            if(i == 0) time = text;
            if(i == 1) event = text;
        } else {
            qDebug() << "用户取消了输入";
        }
    }
    QListWidgetItem *item = ui->listWidget->item(time.toInt()-1);

    if (item) {
        item->setText(time + "-" + event);
    } else {
        qDebug() << "找不到索引为" << time.toInt() - 1 << "的列表项";
    }
}


void Widget::on_pushButton_3_released()
{

    file f;
    QString filename2 = datapath + "note.csv";
    f.read_matrix(filename2,"无");

    QString tempContent;
    QVBoxLayout *layout = ui->verticalLayout;

    for (int i = 0; i < layout->count(); ++i) {
        QCheckBox* checkBox = qobject_cast<QCheckBox*>(layout->itemAt(i)->widget());
        if (checkBox) {
            QString text = checkBox->text();
            QString tempItem;
            bool isChecked = checkBox->isChecked();
            if(isChecked){
                tempItem ="1-" + text;
            }
            else{
                tempItem ="0-" + text;
            }
            tempContent += tempItem;
            if(i<layout->count()-1) tempContent += "丨";

        }
    }



    QString tempContent2;
    int itemCount = ui->listWidget->count();
    for (int i = 0; i < itemCount; ++i) {
        QString tempItem = ui->listWidget->item(i)->text();

        int length = tempItem.length();

        if(length!=1&&length!=2){
            tempContent2 += tempItem;
            if(i<itemCount-2) tempContent2 += "丨";

        }
    }

    if (tempContent2.endsWith("丨")) {
        tempContent2.chop(1);
    }


    bool isExisted = false;
    int i;
    for(i=0;i<f.content_rows_num;i++){


        QStringList temp = f.units[i][0].split("-");
        bool condition1 = temp[0].toInt() == year;
        bool condition2 = temp[1].toInt() == month;
        bool condition3 = temp[2].toInt() == day;


        if(condition1 && condition2 && condition3 ){

            isExisted = 1;

            f.units[i][1] = ui->textEdit->toPlainText();
            qInfo()<<f.units;

            f.units[i][2] = tempContent;

            f.units[i][3] =tempContent2;
        }
    }
    QStringList newLines;
    if(isExisted==false){

        newLines.append(QString::number(year)+"-"+QString::number(month)+"-"+QString::number(day)) ;
        newLines.append(ui->textEdit->toPlainText());
        newLines.append(tempContent);
        newLines.append(tempContent2);
        f.content_rows_num++;
        f.units.append(newLines);
    }

    qInfo()<<newLines;


    f.write_matrix(filename2,"无");
    qDebug()<<"保存成功";
}



void Widget::on_pushButton_4_released()
{

    bool ok;
    QString text = QInputDialog::getText(nullptr, "输入框", "请输入该日要删除的事项:", QLineEdit::Normal, "", &ok);


    if (ok && !text.isEmpty()) {
        qDebug() << "用户输入的文本为:" << text;

        for (int i = ui->verticalLayout->count() - 1; i >= 0; --i) {
            QLayoutItem* item = ui->verticalLayout->itemAt(i);
            QWidget* widget = item->widget();
            if (widget && widget->inherits("QCheckBox")) {
                QCheckBox* checkBox = qobject_cast<QCheckBox*>(widget);
                if (checkBox && checkBox->text() == text) {
                    ui->verticalLayout->removeWidget(checkBox);
                    delete checkBox;
                }
            }
        }
    } else {
        qDebug() << "用户取消了输入";
    }
}


void Widget::on_pushButton_5_released()
{
    QString time;



        bool ok;
        QString text;
        text = QInputDialog::getText(nullptr, "输入框", "请输入事项时间：小时:", QLineEdit::Normal, "", &ok);


        if (ok && !text.isEmpty()) {
            time = text;

        } else {
            qDebug() << "用户取消了输入";
        }

    QListWidgetItem *item = ui->listWidget->item(time.toInt()-1);

    if (item) {
        item->setText(time);
    } else {
        qDebug() << "找不到索引为" << time.toInt() - 1 << "的列表项";
    }
}



void Widget::on_pushButton_6_released()
{
    this->ppage2->show();
}


void Widget::on_pushButton_7_released()
{
    this->ppage3->show();
}

