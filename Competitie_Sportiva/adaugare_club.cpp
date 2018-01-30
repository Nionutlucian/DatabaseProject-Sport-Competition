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

void adaugare_club::on_pushButton_clicked()
{
    QString denumire=ui->nume_club->toPlainText();
    QString adresa=ui->oras_club->toPlainText();
    QString tara=ui->tara_club->toPlainText();
    int id = ui->id_club->toPlainText().toInt();
    clubsportiv clubsportiv(id, denumire, tara,adresa);
    if(cs->addClubsportiv(clubsportiv) == true){
        ui->succes->setText("Clubul sportiv a fost adaugat cu succes!");
    }
    else{
        ui->succes->setText("A aparut o eroare!");
    }
}

void adaugare_club::on_b_inapoi_clicked()
{
    mw = new MainWindow();
    this->hide();
    mw->show();
}
