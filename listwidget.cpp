﻿#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

ListWidget::~ListWidget()
{
    delete ui;
}

void ListWidget::additem(QString str)
{

        ui->listWidget->addItem(str);

}
