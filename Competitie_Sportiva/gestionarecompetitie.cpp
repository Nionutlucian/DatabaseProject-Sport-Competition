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

void GestionareCompetitie::on_b_addclub_clicked()
{
    ac = new adaugare_club();
    this->hide();
    ac->show();
}

void GestionareCompetitie::on_b_addcat_clicked()
{
    acat = new adaugare_categorie();
    this->hide();
    acat->show();
}

void GestionareCompetitie::on_b_clasamente_clicked()
{
    clas  = new clasament();
    this->hide();
    clas->show();
}
