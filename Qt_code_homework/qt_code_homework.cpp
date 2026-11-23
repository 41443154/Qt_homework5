#include "qt_code_homework.h"
#include "ui_qt_code_homework.h"
#include <QStyle>
#include <QMessageBox>

Qt_code_homework::Qt_code_homework(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Qt_code_homework)
{
    ui->setupUi(this);

    ui->actionOpen->setIcon(
        style()->standardIcon(QStyle::SP_DialogOpenButton));

    ui->actionSave->setIcon(
        style()->standardIcon(QStyle::SP_DialogSaveButton));

    ui->actionExit->setIcon(
        style()->standardIcon(QStyle::SP_DialogCloseButton));

    //Open
    connect(ui->actionOpen, &QAction::triggered, this, [this]() {
        QMessageBox::information(this, "Open", "Open 功能已觸發");
    });

    //Save
    connect(ui->actionSave, &QAction::triggered, this, [this]() {
        QMessageBox::information(this, "Save", "Save 功能已觸發");
    });

    //Exit
    connect(ui->actionExit, &QAction::triggered, this, [this]() {
        close();
    });

}
Qt_code_homework::~Qt_code_homework()
{
    delete ui;
}
