#include "splitterwidget.h"


SPlitterWidget::SPlitterWidget(QWidget *parent)
    : QWidget{parent}
    , m_pMainLayout(Q_NULLPTR)
    , tleft(Q_NULLPTR)
    , m_rightTop(Q_NULLPTR)
    , m_rightbotton(Q_NULLPTR)
{
    InitUIDesign();
}

void SPlitterWidget::InitUIDesign()
{


    // 将主窗口进行分割
    m_pMainLayout = new QSplitter(Qt::Horizontal, 0); // 将窗口水平分割


    // 左边部分
    tleft = new QTextEdit(QObject::tr("左边:部分"),m_pMainLayout);
    tleft->setAlignment(Qt::AlignCenter);


    // 右边分割窗口
    QSplitter* RightLayout = new QSplitter(Qt::Vertical, m_pMainLayout);  // 垂直分割
    RightLayout->setOpaqueResize(false);

    // 右侧顶部
    m_rightTop = new QTextEdit(QObject::tr("右边:顶部"),RightLayout);
    m_rightTop->setAlignment(Qt::AlignCenter);


    // 右侧底部
    m_rightbotton = new QTextEdit(QObject::tr("右边:底部"),RightLayout);
    m_rightbotton->setAlignment(Qt::AlignCenter);


    // 将右边分割窗口添加到主窗口
    m_pMainLayout->addWidget(RightLayout);
    m_pMainLayout->setStretchFactor(1, 1);  // 设置分割区域的伸缩比例

    m_pMainLayout->setWindowTitle(QObject::tr("UI设计"));
    m_pMainLayout->show();



}
