#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>

namespace Ui {
class timetable;
}

class timetable : public QWidget
{
    Q_OBJECT

public:
    explicit timetable(QWidget *parent = nullptr);
    ~timetable();
    void loadCSV(const QString &filePath);
    void saveCSV(const QString &filePath);

private slots:
    void on_saveButton_clicked();

private:
    Ui::timetable *ui;
};

#endif // TIMETABLE_H
