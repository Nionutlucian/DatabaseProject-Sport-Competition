#include "adaugare_participant.h"
#include "ui_adaugare_participant.h"
#include "participant.h"
#include <vector>
adaugare_participant::adaugare_participant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugare_participant)
{
    ui->setupUi(this);
}

adaugare_participant::~adaugare_participant()
{
    delete ui;
}



void adaugare_participant::on_b_adauga_clicked()
{
           QString nume=ui->nume->toPlainText();
           QString prenume=ui->prenume->toPlainText();
           QString tara=ui->tara->toPlainText();
           QString gen=ui->gen->toPlainText();
           bool ok = true;
           int id = ui->id->toPlainText().toInt(&ok);
           int varsta = ui->varsta->toPlainText().toInt(&ok);
           int greutate = ui->greutate->toPlainText().toInt(&ok);

           Participant participant(id, nume, prenume,tara, greutate,varsta, gen);
           if(!ok)
           {
               //QMessageBox::warning(this, tr("Error"), tr("id, varsta, greutate, id_club trebuie sa fie numere"));

           } else {
                pd->addParticipant(participant);

           }
//           QString text;
//           std::vector<Participant> listParticipanti = pd->getParticipanti();
//           for(int i = 0;i< listParticipanti.size();i++){
//                text = text + listParticipanti[i].getNume() + "/n";
//                ui->afisare_participanti->setText(text);
//           }
}
