#include "timer.h"
#include "ui_timer.h"
#include <QTimer>
#include <QTime>
timer::timer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::timer)
{
    ui->setupUi(this);
    ui->timeEdit->setDisplayFormat("hh:mm:ss");
    this->hms.hour=0;
    this->hms.minute=0;
    this->hms.second=0;
    m_timer=new QTimer(this);
    m_timer->stop();
    m_timer->setSingleShot(false);
    m_timer->setTimerType(Qt::PreciseTimer);
    m_timer->setInterval(1000);
    connect(m_timer,&QTimer::timeout,this,&timer::do_timer_timeout);


}

timer::~timer()
{
    delete ui;
}
bool timer::subtractOneSecond(){
    if(hms.second<=0&&hms.minute==0&&hms.hour==0){
        return false;
    }
    hms.second--;
    if(hms.second<0){
        hms.minute--;
        hms.second=59;
        if(hms.minute<0){
            hms.hour--;
            hms.minute=59;
        }
    }
    return true;
}
void timer::do_timer_timeout(){
    bool retBool=this->subtractOneSecond();
    if(!retBool){
        m_timer->stop();
        return;
    }
    ui->lcdHour->display(hms.hour);
    ui->lcdMinute->display(hms.minute);
    ui->lcdSecond->display(hms.second);

}
void timer::on_btnStart_clicked(){
    m_timer->start();
    QTime tm=ui->timeEdit->time();
    this->hms.hour=tm.hour();
    this->hms.minute=tm.minute();
    this->hms.second=tm.second();
    qDebug()<<this->hms.hour<<this->hms.minute<<this->hms.second;


}

void timer::on_btnStop_clicked()
{
    m_timer->stop();
}

