#ifndef DEMO_H
#define DEMO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Demo; }
QT_END_NAMESPACE

class Demo : public QWidget
{
    Q_OBJECT

public:
    Demo(QWidget *parent = nullptr);
    ~Demo();

private slots:
    void on_btn_Close_clicked();

private:
    Ui::Demo *ui;
};
#endif // DEMO_H
