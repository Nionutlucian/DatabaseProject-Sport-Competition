#include "gestionarecompetitie.h"
#include "ui_gestionarecompetitie.h"

GestionareCompetitie::GestionareCompetitie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionareCompetitie)
{
    ui->setupUi(this);
}

GestionareCompetitie::~GestionareCompetitie()
{
    delete ui;
}

void GestionareCompetitie::on_b_adauga_clicked()
{

        ap = new adaugare_participant();
        this->hide();
        ap->show();
}
