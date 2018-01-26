#include "adaugareparticipant.h"
#include "ui_adaugareparticipant.h"

AdaugareParticipant::AdaugareParticipant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdaugareParticipant)
{
    ui->setupUi(this);
}

AdaugareParticipant::~AdaugareParticipant()
{
    delete ui;
}


void AdaugareParticipant::setParticipant(const QString &nume_participant, const QString &prenume_participant, const QString &tara_participant, const int &varsta_participant, const int &greutate_participant, const int &experienta_participant)
{
    ui->nume_participant->setText(nume_participant);
    ui->prenume_participant->setText(prenume_participant);
    ui->tara_participant->setText(tara_participant);
    ui->varsta_participant->setText(varsta_participant);
    ui->greutate_participant->setText(greutate_participant);
    ui->experienta_participant->setText(experienta_participant);
}
