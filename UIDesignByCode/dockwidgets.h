#ifndef DOCKWIDGETS_H
#define DOCKWIDGETS_H

#include <QMainWindow>
#include <QTextEdit>
#include <QDockWidget>


class DockWidgets : public QMainWindow
{
    Q_OBJECT
public:
    explicit DockWidgets(QWidget *parent = nullptr);

    void InitUIDesign();
signals:
private:

};

#endif // DOCKWIDGETS_H
