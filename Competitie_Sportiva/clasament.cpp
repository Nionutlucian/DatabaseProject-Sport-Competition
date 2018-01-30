#include "clasament.h"
#include "ui_clasament.h"
#include <iomanip>

clasament::clasament(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clasament)
{
    ui->setupUi(this);
}

clasament::~clasament()
{
    delete ui;
}

void clasament::on_b_afisezaclasament_clicked()
{




    //

    for(int i = 0;i<pd->getParticipanti().size();i++){
       ui->nr_crt->append(QString::number(i+1));
       ui->clasament_general_nume->append(pd->getParticipanti()[i].getNume());
       ui->clasament_general_pnume->append(pd->getParticipanti()[i].getPrenume());
       ui->clasament_general_punctaj->append(QString::number(pd->getParticipanti()[i].getPunctaj()));
    }
}

void clasament::on_b_inapoi_clicked()
{
    mw = new MainWindow();
    this->hide();
    mw->show();
}
