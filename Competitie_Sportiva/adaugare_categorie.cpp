#include "adaugare_categorie.h"
#include "ui_adaugare_categorie.h"


adaugare_categorie::adaugare_categorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugare_categorie)
{
    ui->setupUi(this);
}

adaugare_categorie::~adaugare_categorie()
{
    delete ui;
}

void adaugare_categorie::on_b_adaugacategorie_clicked()
{
    QString nume_categorie = ui->nume->toPlainText();
    int varsta_minima=ui->varsta_min->toPlainText().toInt();
    int varsta_maxima=ui->varsta_max->toPlainText().toInt();
    int id = ui->id->toPlainText().toInt();
    int greutate_manima=ui->greutate_min->toPlainText().toInt();
    int greutate_maxima=ui->greutate_max->toPlainText().toInt();
    QString sex_participant=ui->sex->toPlainText();
    categorie cate(id,nume_categorie,varsta_minima,varsta_maxima,greutate_manima,greutate_maxima,sex_participant);
    if(cat->addCategorie(cate)){
        ui->succes->setText("Categoria a fost adaugata cu succes!");
    }
    else{
        ui->succes->setText("A aparut o eroare!");
    }
}
