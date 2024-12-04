#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QCloseEvent>
#include <Qtimer> // for timer functions
#include <QChar> // used for timer display show it shows as "04:03" instead of "4:3"
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) override; //Manage closing event for minimize to tray

private slots:
    void on_complete_task_button_clicked();

    void on_del_task_button_clicked();

    void on_task_list_currentRowChanged(int currentRow);

    void on_user_input_returnPressed();

    void updateTimer(); // this handles timer updates

    void on_start_timer_button_clicked(); // this starts the timer

    void on_task_list_itemDoubleClicked(QListWidgetItem *item);

    void on_work_break_button_clicked();

private:
    Ui::MainWindow *ui;

    int taskListRow = -1; //List pointer
    bool closing; //Closing event for minmize to tray
    QTimer *timer; // this is a timer instance
    int timeRemaining; // this is how much time is remaining in seconds
    bool isBreakTime = false; // this switches from work and break sessions
    void updateTimerDisplay(); // this updates the visual for the timer
    QSystemTrayIcon *trayIconNotification;  // For system tray icon
    void showNotification(const QString &message); // Method to show notifications
};
#endif // MAINWINDOW_H
