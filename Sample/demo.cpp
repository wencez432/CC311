#include "demo.h"
#include "ui_demo.h"

Demo::Demo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Demo)
{
    ui->setupUi(this);
    connect(ui->btn_Exit, &QAbstractButton::clicked, this, &QWidget::close);
}

Demo::~Demo()
{
    delete ui;
}


void Demo::on_btn_Close_clicked()
{
    qInfo() << "Click button";
    close();
}

