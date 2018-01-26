#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QListWidgetItem>
#include <QSvgWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *GS;
    QString filename,tagxml,tagsvg;
    QStringList lines;
    QSvgWidget *SVGW;
    void dragEnterEvent(QDragEnterEvent*);
    void dropEvent(QDropEvent*);

private slots:
    void on_action_new_triggered();
    void on_action_open_triggered();
    void on_action_save_triggered();
    void on_action_saveas_triggered();
    void on_action_close_triggered();
    void on_action_quit_triggered();
    void on_action_about_triggered();
    void on_actionReload_triggered();
    void on_actionLine_triggered();
    void on_actionRect_triggered();
    void on_actionCircle_triggered();
    void on_actionEllipse_triggered();
    void on_actionPolygon_triggered();
    void on_actionPolyline_triggered();
    void on_actionPath_triggered();
    void on_actionText_triggered();
    void on_pushButtonMoveUp_clicked();
    void on_pushButtonMoveDown_clicked();
    void on_pushButtonModify_clicked();
    void on_pushButtonInsert_clicked();
    void on_pushButtonDelete_clicked();
    void drawItem(QListWidgetItem*);
    void preview();
};

#endif // MAINWINDOW_H
