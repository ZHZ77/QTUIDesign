#include "dockwidgets.h"

DockWidgets::DockWidgets(QWidget *parent)
    : QMainWindow{parent}
{
    InitUIDesign();
}

void DockWidgets::InitUIDesign()
{
    setWindowTitle("停靠窗口QDockWidget类案例分析实战");

    QTextEdit*te1 = new QTextEdit(this);
    te1->setText("主窗口");
    te1->setAlignment(Qt::AlignCenter);
    setCentralWidget(te1);

    // 设计停靠窗口1
    QDockWidget*dock1 = new QDockWidget("停靠窗口1", this);
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit*te2 = new QTextEdit();
    te2->setText("第一个停靠控件");
    dock1->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea, dock1);

    // 设计停靠窗口2
    dock1 = new QDockWidget("停靠窗口2", this);
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit*te3 = new QTextEdit();
    te3->setText("第二个停靠控件");
    dock1->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea, dock1);

    // 设计停靠窗口3
    dock1 = new QDockWidget("停靠窗口3", this);
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit*te4 = new QTextEdit();
    te4->setText("第三个停靠控件");
    dock1->setWidget(te4);
    addDockWidget(Qt::RightDockWidgetArea, dock1);


    show();
}
