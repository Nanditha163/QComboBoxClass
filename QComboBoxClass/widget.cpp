#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList list;

    list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";

    ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");

       ui->comboBox->setEditable(true);

       for(int i=0;i<list.size();i++)

       {

       ui->comboBox->addItem(QIcon("C:/nanditha/Fruit icon.png"),list.at(i));

   }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_CaptureValuepushButton_clicked()
{
    qDebug()<<"The currently choosen item is";
    ui->comboBox->currentIndex();
    ui->comboBox->currentText();

    qDebug()<<"Index"<<QString::number(ui->comboBox->currentIndex());
    qDebug()<<ui->comboBox->currentText();

}

void Widget::on_SetValuepushButton_clicked()
{
  qDebug()<<"The combo box current setvalue";
   ui->comboBox->setCurrentIndex(1);


      qDebug()<<"Index"<<QString::number(1)<<":"<<ui->comboBox->itemText(1);

    }


void Widget::on_GetValuepushButton_clicked()
{
   qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";

    for(int i=0;i<ui->comboBox->count();i++)

     {

        qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);

      }
}
