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
#include <QtGui/QIcon>
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
    QPushButton *work_break_button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *work_or_break;
    QLabel *current_task;

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
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 90, 73);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
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
        user_input->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 179);\n"
""));

        verticalLayout_3->addWidget(user_input);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        complete_task_button = new QPushButton(verticalLayoutWidget_2);
        complete_task_button->setObjectName("complete_task_button");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        complete_task_button->setFont(font1);
        complete_task_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 90, 73);"));

        horizontalLayout_2->addWidget(complete_task_button);

        del_task_button = new QPushButton(verticalLayoutWidget_2);
        del_task_button->setObjectName("del_task_button");
        del_task_button->setFont(font1);
        del_task_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 90, 73);"));

        horizontalLayout_2->addWidget(del_task_button);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        task_list = new QListWidget(verticalLayoutWidget_2);
        task_list->setObjectName("task_list");
        task_list->setFont(font1);
        task_list->setStyleSheet(QString::fromUtf8(""));
        task_list->setAlternatingRowColors(true);

        verticalLayout->addWidget(task_list);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        finished_task = new QListWidget(verticalLayoutWidget_2);
        finished_task->setObjectName("finished_task");
        finished_task->setFont(font1);
        finished_task->setStyleSheet(QString::fromUtf8(""));
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
        warning_nvs->setGeometry(QRect(540, 10, 441, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setItalic(true);
        warning_nvs->setFont(font2);
        warning_nvs->setStyleSheet(QString::fromUtf8("color: rgb(207, 207, 207);\n"
"background-color: transparent;"));
        warning_nvs->setScaledContents(true);
        warning_nvs->setAlignment(Qt::AlignmentFlag::AlignCenter);
        warning_nvs->setWordWrap(true);
        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setGeometry(QRect(90, 40, 541, 501));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(18);
        font3.setBold(false);
        image->setFont(font3);
        image->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        image->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tomato-icon.png")));
        timer_display = new QLabel(centralwidget);
        timer_display->setObjectName("timer_display");
        timer_display->setGeometry(QRect(180, 260, 341, 111));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(50);
        font4.setBold(true);
        timer_display->setFont(font4);
        timer_display->setAutoFillBackground(false);
        timer_display->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        timer_display->setAlignment(Qt::AlignmentFlag::AlignCenter);
        start_timer_button = new QPushButton(centralwidget);
        start_timer_button->setObjectName("start_timer_button");
        start_timer_button->setGeometry(QRect(300, 380, 80, 42));
        start_timer_button->setFont(font1);
        start_timer_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 90, 73);"));
        work_break_button = new QPushButton(centralwidget);
        work_break_button->setObjectName("work_break_button");
        work_break_button->setGeometry(QRect(380, 380, 41, 41));
        work_break_button->setFont(font1);
        work_break_button->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 0);"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        work_break_button->setIcon(icon);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 550, 501, 90));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        work_or_break = new QLabel(verticalLayoutWidget);
        work_or_break->setObjectName("work_or_break");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(24);
        font5.setBold(true);
        work_or_break->setFont(font5);
        work_or_break->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        work_or_break->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(work_or_break);

        current_task = new QLabel(verticalLayoutWidget);
        current_task->setObjectName("current_task");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(20);
        font6.setBold(true);
        current_task->setFont(font6);
        current_task->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;"));

        verticalLayout_2->addWidget(current_task);

        MainWindow->setCentralWidget(centralwidget);
        image->raise();
        verticalLayoutWidget_2->raise();
        warning_nvs->raise();
        timer_display->raise();
        start_timer_button->raise();
        work_break_button->raise();
        verticalLayoutWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pomodoro App", nullptr));
        user_input->setText(QString());
        user_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter To-Do Task Here", nullptr));
        complete_task_button->setText(QCoreApplication::translate("MainWindow", "Complete", nullptr));
        del_task_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "To-Do List", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Completed List", nullptr));
        warning_nvs->setText(QCoreApplication::translate("MainWindow", "Can't complete a task that hasn't been started yet!", nullptr));
        image->setText(QString());
        timer_display->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        start_timer_button->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        work_break_button->setText(QString());
        work_or_break->setText(QCoreApplication::translate("MainWindow", "Work/Break Message", nullptr));
        current_task->setText(QCoreApplication::translate("MainWindow", "Current Task: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
