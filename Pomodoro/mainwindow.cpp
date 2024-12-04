#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QCloseEvent>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timeRemaining(25 * 60) // this initializes with the work session (25 mins)
    , isBreakTime(false) // this starts with the work session
{
    ui->setupUi(this);

    // initializes the timer!
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer);

    // initializes the timer display
    ui->timer_display->setText("25:00");

    //Event manager for minmize to tray and closing
    closing = false;

    auto exitAction = new QAction(tr("&Exit"), this);
    connect(exitAction, &QAction::triggered, [this]()
            {
                closing = true;
                close();
            });

    auto trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(exitAction);

    auto sysTrayIcon = new QSystemTrayIcon(this);
    trayIconNotification = sysTrayIcon;
    sysTrayIcon->setContextMenu(trayIconMenu);
    sysTrayIcon->setIcon(QIcon(":/resources/img/tomato-icon.png"));
    sysTrayIcon->show();

    connect(sysTrayIcon, &QSystemTrayIcon::activated, [this](auto reason)
            {
                if(reason == QSystemTrayIcon::Trigger)
                {
                    if(isVisible())
                    {
                        hide();
                    }
                    else
                    {
                        show();
                        activateWindow();
                    }
                }
            });

    //Label set up
    ui->task_list->setStyleSheet("QListWidget{alternate-background-color: #FF6C5C;background-color: #FF887B;}QListWidget::item::selected{background-color: #FF4C38; color: #FFFFFF}");
    ui->finished_task->setStyleSheet("QListWidget{alternate-background-color: #FF6C5C;background-color: #FF887B;}QListWidget::item{background-color: #14D887; color: #FFFFFF}");
    ui->warning_nvs->hide();
    ui->work_or_break->setText("Focus On Work");
}

MainWindow::~MainWindow()
{
    delete ui;
}

// starts/stop a countdown timer for the work or rest session, change button layout accordingly
void MainWindow::on_start_timer_button_clicked()
{
    if (timer->isActive() == false)     //If timer not active, start
    {
        if (!isBreakTime) {
            timeRemaining = 25 * 60; // Work session: 25 minutes in seconds

        } else {
            timeRemaining = 5 * 60;  // Rest session: 5 minutes in seconds
        }

        timer->start(1000); // Start the timer with a 1-second interval

        updateTimerDisplay(); // update the timer display
        ui->start_timer_button->setText("Stop");
    }
    else                                //If timer is active, stop
    {
        timer->stop();
        ui->start_timer_button->setText("Start");
    }

}

// updates the countdown timer and switches between sessions when time runs out
void MainWindow::updateTimer()
{
    if (timeRemaining > 0) {
        timeRemaining --; // decrement timer in second by 1 second intervals
        updateTimerDisplay(); // updates the timer display

    } else {
        timer->stop(); // stops the timer when the countdown ends

        if (!isBreakTime) {
            // this switches to break session
            ui->timer_display->setText("It's Break Time!");
            isBreakTime = true;
            showNotification("Break Time! Take a 5-minute rest.");

        } else {
            // this switches to work session
            ui->timer_display->setText("It's Work Time!");
            isBreakTime = false;
            showNotification("Work Time! Focus for 25 minutes.");
        }

        // restarts the next session on click
        on_start_timer_button_clicked();
    }

}

// this updates the timer display in a 'minute:second' format
void MainWindow::updateTimerDisplay()
{
    int minutes = timeRemaining / 60; // this calculates the time in minutes
    int seconds = timeRemaining % 60; // this calculates the remaining time in seconds

    // this formats the time as the 'minute:second' format
    QString timeText = QString("%1:%2")
                           .arg(minutes, 2, 10, QChar('0'))  // this formats the minutes
                           .arg(seconds, 2, 10, QChar('0')); // this formats the seconds

    // displays the current session (Work or break) along with the remaining time
    if (!isBreakTime) {
        ui->timer_display->setText(timeText); // if not break time, display that its the work session + time
        ui->work_or_break->setText("Focus On Work");

    } else {
        ui->timer_display->setText(timeText); // if break time, display that its break session + time
        ui->work_or_break->setText("Take A Break");
    }

}

//Button for switching on either work or break mode
void MainWindow::on_work_break_button_clicked()
{
    if (isBreakTime == true)
    {
        timer->stop();
        ui->start_timer_button->setText("Start");
        ui->timer_display->setText("25:00");
        ui->work_or_break->setText("Focus On Work");
        isBreakTime = false;
    }
    else
    {
        timer->stop();
        ui->start_timer_button->setText("Start");
        ui->timer_display->setText("05:00");
        ui->work_or_break->setText("Take A Break");
        isBreakTime = true;
    }
}

//Take input from user pressing Enter
void MainWindow::on_user_input_returnPressed()
{
    QString str = ui->user_input->text();

    if(str == "")
        return;

    ui->task_list->addItem(str);
    ui->user_input->setText("");
}

//Complete button for list
void MainWindow::on_complete_task_button_clicked()
{
    if(taskListRow != -1)
    {
        QString rm = ui->current_task->text();
        rm.remove(0,14);

        QListWidgetItem *selection = ui->task_list->item(taskListRow);
        QString text = selection->text();

        if (rm == text)
        {
            selection = ui->task_list->takeItem(taskListRow);
            ui->finished_task->addItem(selection);
            ui->current_task->setText("Current Task: ");
            ui->task_list->setCurrentRow(-1);
        }
        else
        {
            ui->warning_nvs->show();

        }
    }
}

//Delete button for list
void MainWindow::on_del_task_button_clicked()
{
    if(taskListRow != -1)
    {
        QListWidgetItem *selection = ui->task_list->takeItem(taskListRow);
        delete selection;
        ui->task_list->setCurrentRow(-1);
    }
}

//Pointer for list
void MainWindow::on_task_list_currentRowChanged(int currentRow)
{
    ui->warning_nvs->hide();
    taskListRow = currentRow;
}

//Set current task to selection on list when user double click
void MainWindow::on_task_list_itemDoubleClicked(QListWidgetItem *item)
{
    if(taskListRow != -1)
    {
        QString display ="Current Task: " + item->text();
        ui->current_task->setText(display);
    }
}

void MainWindow::showNotification(const QString &message)
{
    trayIconNotification->showMessage("Pomodoro Timer", message, QSystemTrayIcon::Information, 3000); // 3-second duration
}

//Handle close event
void MainWindow::closeEvent(QCloseEvent *event)
{
    if(closing)
    {
        event->accept();
    }
    else
    {
        this->hide();
        event->ignore();
    }
}


