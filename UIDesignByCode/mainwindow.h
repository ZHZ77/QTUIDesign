#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
class SPlitterWidget;
class DockWidgets;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    SPlitterWidget* m_splwidget;//splitter类对象窗口
    DockWidgets* m_docwidget;
};
#endif // MAINWINDOW_H
