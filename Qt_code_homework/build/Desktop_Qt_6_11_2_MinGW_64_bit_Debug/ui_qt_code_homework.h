/********************************************************************************
** Form generated from reading UI file 'qt_code_homework.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CODE_HOMEWORK_H
#define UI_QT_CODE_HOMEWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_code_homework
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuImage;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Qt_code_homework)
    {
        if (Qt_code_homework->objectName().isEmpty())
            Qt_code_homework->setObjectName("Qt_code_homework");
        Qt_code_homework->resize(800, 600);
        actionOpen = new QAction(Qt_code_homework);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(Qt_code_homework);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(Qt_code_homework);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(Qt_code_homework);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setToolTipDuration(-1);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        Qt_code_homework->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Qt_code_homework);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuImage = new QMenu(menubar);
        menuImage->setObjectName("menuImage");
        Qt_code_homework->setMenuBar(menubar);
        statusbar = new QStatusBar(Qt_code_homework);
        statusbar->setObjectName("statusbar");
        Qt_code_homework->setStatusBar(statusbar);
        toolBar = new QToolBar(Qt_code_homework);
        toolBar->setObjectName("toolBar");
        Qt_code_homework->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuImage->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionExit);

        retranslateUi(Qt_code_homework);

        QMetaObject::connectSlotsByName(Qt_code_homework);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_code_homework)
    {
        Qt_code_homework->setWindowTitle(QCoreApplication::translate("Qt_code_homework", "Qt_code_homework", nullptr));
        actionOpen->setText(QCoreApplication::translate("Qt_code_homework", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Qt_code_homework", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Qt_code_homework", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Qt_code_homework", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Qt_code_homework", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Qt_code_homework", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("Qt_code_homework", "\344\272\272\350\207\211\345\275\261\345\203\217\345\267\245\344\275\234\345\215\200\357\274\210\345\260\232\346\234\252\350\274\211\345\205\245\345\234\226\347\211\207\357\274\211", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Qt_code_homework", "File", nullptr));
        menuImage->setTitle(QCoreApplication::translate("Qt_code_homework", "Image", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Qt_code_homework", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_code_homework: public Ui_Qt_code_homework {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CODE_HOMEWORK_H
