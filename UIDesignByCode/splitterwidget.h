#ifndef SPLITTERWIDGET_H
#define SPLITTERWIDGET_H

#include <QWidget>

#include <QSplitter>
#include <QTextEdit>
#include <QObject>

class SPlitterWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SPlitterWidget(QWidget *parent = nullptr);
    void InitUIDesign();

private:
    // 窗口总布局
    QSplitter *m_pMainLayout;
    // 左边部分
    QTextEdit* tleft;

    // 右边部分
    QTextEdit* m_rightTop;
    QTextEdit* m_rightbotton;


signals:
};

#endif // SPLITTERWIDGET_H
