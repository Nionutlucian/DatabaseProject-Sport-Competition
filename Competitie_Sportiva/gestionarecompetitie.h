#ifndef GESTIONARECOMPETITIE_H
#define GESTIONARECOMPETITIE_H

#include <QDialog>
#include <adaugare_participant.h>

namespace Ui {
class GestionareCompetitie;
}

class GestionareCompetitie : public QDialog
{
    Q_OBJECT

public:
    explicit GestionareCompetitie(QWidget *parent = 0);
    ~GestionareCompetitie();

private slots:
    void on_b_adauga_clicked();

private:
    Ui::GestionareCompetitie *ui;
    adaugare_participant *ap;
};

#endif // GESTIONARECOMPETITIE_H
