/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *current_task;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *user_input;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *complete_task_button;
    QPushButton *del_task_button;
    QLabel *label_2;
    QListWidget *task_list;
    QLabel *label;
    QListWidget *finished_task;
    QLabel *warning_nvs;
    QLabel *image;
    QLabel *timer_display;
    QPushButton *start_timer_button;
    QLabel *work_or_break;
    QPushButton *work_break_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(986, 709);
        MainWindow->setMinimumSize(QSize(986, 709));
        MainWindow->setMaximumSize(QSize(986, 709));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        current_task = new QLabel(centralwidget);
        current_task->setObjectName("current_task");
        current_task->setGeometry(QRect(0, 0, 541, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        current_task->setFont(font1);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(640, 40, 331, 651));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        user_input = new QLineEdit(verticalLayoutWidget_2);
        user_input->setObjectName("user_input");
        user_input->setFont(font);

        verticalLayout_3->addWidget(user_input);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        complete_task_button = new QPushButton(verticalLayoutWidget_2);
        complete_task_button->setObjectName("complete_task_button");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(18);
        font2.setBold(true);
        complete_task_button->setFont(font2);

        horizontalLayout_2->addWidget(complete_task_button);

        del_task_button = new QPushButton(verticalLayoutWidget_2);
        del_task_button->setObjectName("del_task_button");
        del_task_button->setFont(font2);

        horizontalLayout_2->addWidget(del_task_button);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        task_list = new QListWidget(verticalLayoutWidget_2);
        task_list->setObjectName("task_list");
        task_list->setFont(font2);
        task_list->setAlternatingRowColors(true);

        verticalLayout->addWidget(task_list);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        finished_task = new QListWidget(verticalLayoutWidget_2);
        finished_task->setObjectName("finished_task");
        finished_task->setFont(font2);
        finished_task->setProperty("showDropIndicator", QVariant(false));
        finished_task->setAlternatingRowColors(true);
        finished_task->setSelectionRectVisible(false);

        verticalLayout->addWidget(finished_task);

        verticalLayout->setStretch(2, 2);
        label_2->raise();
        label->raise();
        finished_task->raise();
        task_list->raise();
        warning_nvs = new QLabel(centralwidget);
        warning_nvs->setObjectName("warning_nvs");
        warning_nvs->setEnabled(true);
        warning_nvs->setGeometry(QRect(600, 10, 441, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setItalic(true);
        warning_nvs->setFont(font3);
        warning_nvs->setScaledContents(true);
        warning_nvs->setAlignment(Qt::AlignmentFlag::AlignCenter);
        warning_nvs->setWordWrap(true);
        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setGeometry(QRect(100, 70, 541, 501));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(18);
        font4.setBold(false);
        image->setFont(font4);
        image->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        image->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tomato-icon.png")));
        timer_display = new QLabel(centralwidget);
        timer_display->setObjectName("timer_display");
        timer_display->setGeometry(QRect(190, 270, 341, 111));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(50);
        font5.setBold(true);
        timer_display->setFont(font5);
        timer_display->setAutoFillBackground(false);
        timer_display->setAlignment(Qt::AlignmentFlag::AlignCenter);
        start_timer_button = new QPushButton(centralwidget);
        start_timer_button->setObjectName("start_timer_button");
        start_timer_button->setGeometry(QRect(300, 390, 131, 41));
        start_timer_button->setFont(font2);
        work_or_break = new QLabel(centralwidget);
        work_or_break->setObjectName("work_or_break");
        work_or_break->setGeometry(QRect(220, 200, 291, 71));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(24);
        font6.setBold(true);
        work_or_break->setFont(font6);
        work_break_button = new QPushButton(centralwidget);
        work_break_button->setObjectName("work_break_button");
        work_break_button->setGeometry(QRect(260, 140, 191, 51));
        work_break_button->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        image->raise();
        current_task->raise();
        verticalLayoutWidget_2->raise();
        warning_nvs->raise();
        timer_display->raise();
        start_timer_button->raise();
        work_or_break->raise();
        work_break_button->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pomodoro App", nullptr));
        current_task->setText(QCoreApplication::translate("MainWindow", "Current Task: ", nullptr));
        user_input->setText(QString());
        user_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter To-Do Task Here", nullptr));
        complete_task_button->setText(QCoreApplication::translate("MainWindow", "Completed", nullptr));
        del_task_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "To-Do List", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Completed List", nullptr));
        warning_nvs->setText(QCoreApplication::translate("MainWindow", "Can't complete a task that hasn't been started yet!", nullptr));
        image->setText(QString());
        timer_display->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        start_timer_button->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        work_or_break->setText(QCoreApplication::translate("MainWindow", "Work or Break", nullptr));
        work_break_button->setText(QCoreApplication::translate("MainWindow", "Working", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
