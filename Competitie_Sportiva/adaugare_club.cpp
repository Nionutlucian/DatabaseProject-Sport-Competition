#include "adaugare_club.h"
#include "ui_adaugare_club.h"

adaugare_club::adaugare_club(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugare_club)
{
    ui->setupUi(this);
}

adaugare_club::~adaugare_club()
{
    delete ui;
}
