#ifndef QT_CODE_HOMEWORK_H
#define QT_CODE_HOMEWORK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Qt_code_homework;
}
QT_END_NAMESPACE

class Qt_code_homework : public QMainWindow
{
    Q_OBJECT

public:
    explicit Qt_code_homework(QWidget *parent = nullptr);
    ~Qt_code_homework() override;

private:
    Ui::Qt_code_homework *ui;
};
#endif // QT_CODE_HOMEWORK_H
