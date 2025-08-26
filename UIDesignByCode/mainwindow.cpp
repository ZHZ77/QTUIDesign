#include "mainwindow.h"

#include "splitterwidget.h"
#include "dockwidgets.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_splwidget(Q_NULLPTR)
    , m_docwidget(Q_NULLPTR)

{
    // m_splwidget = new SPlitterWidget(this);     // splitterwidget实现
    m_docwidget = new DockWidgets(this);


}

MainWindow::~MainWindow() {

}
