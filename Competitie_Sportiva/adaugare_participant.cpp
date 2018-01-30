#include "adaugare_participant.h"
#include "ui_adaugare_participant.h"
#include "participant.h"
#include <vector>
adaugare_participant::adaugare_participant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugare_participant)
{
    ui->setupUi(this);
    for(int i=0;i<pd->selectClubSportiv().size();i++){
    ui->select_clubsportiv->insertItem(i,pd->selectClubSportiv()[i]);
    }
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
           QString cnp = ui->cnp->toPlainText();
           int id = ui->id->toPlainText().toInt();
           int varsta = ui->varsta->toPlainText().toInt();
           int greutate = ui->greutate->toPlainText().toInt();
           QString nume_club = ui->select_clubsportiv->currentText();
           Participant participant(id, nume, prenume,tara, greutate,varsta, gen,cnp,nume_club);
           if(pd->addParticipant(participant)==true){
               ui->succes->setText("Participantul a fost adaugat cu succes!");
           }
           else{
               ui->succes->setText("A aparut o eroare!");
           }




//        ui->afisare_participanti->setText(participant.getNume() + participant.getPrenume() + participant.getTara() + participant.getGen() + participant.getID() + participant.getVarsta() + participant.getGreutate());
//           QString text;
//           std::vector<Participant> listParticipanti = pd->getParticipanti();
//           for(int i = 0;i< listParticipanti.size();i++){
//                text = text + listParticipanti[i].getNume() + "/n";
//                ui->afisare_participanti->setText(text);
//          }

}
