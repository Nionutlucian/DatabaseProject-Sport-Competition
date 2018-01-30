#include "simulare_window.h"
#include "ui_simulare_window.h"

simulare_window::simulare_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simulare_window)
{
    ui->setupUi(this);
}

simulare_window::~simulare_window()
{
    delete ui;
}

void simulare_window::on_b_clasamente_clicked()
{
    c = new clasament();
    this->hide();
    c->show();
}
