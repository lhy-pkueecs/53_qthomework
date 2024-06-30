#ifndef TIMER_H
#define TIMER_H

#include <QWidget>

namespace Ui {
class timer;
}

class timer : public QWidget
{
    Q_OBJECT

public:
    explicit timer(QWidget *parent = nullptr);
    ~timer();
    typedef struct TimeHMS{
        int hour;
        int minute;
        int second;

    }TimeHMS;
    TimeHMS hms;
    QTimer* m_timer;
    bool subtractOneSecond();
    void do_timer_timeout();


private slots:
    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    Ui::timer *ui;
};

#endif // TIMER_H
