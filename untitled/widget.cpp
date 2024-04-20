#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->le,SIGNAL(returnPressed()),this, SLOT(on_b1_clicked()));
    connect(ui->b2,&QPushButton::clicked,this,&Widget::on_b2_clicked);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_b1_clicked()
{
   QProcess *m=new QProcess(this);
   QString s=ui->le->text();
    m->start(s);
}

void Widget::on_b2_clicked()
{
    this->close();
}
