#ifndef ADAUGARE_PARTICIPANT_H
#define ADAUGARE_PARTICIPANT_H

#include <QDialog>
#include<QString>
#include "participantdao.h"
namespace Ui {
class adaugare_participant;
}

class adaugare_participant : public QDialog
{
    Q_OBJECT

public:
    explicit adaugare_participant(QWidget *parent = 0);
    ~adaugare_participant();

private slots:


    void on_b_adauga_clicked();

private:
    Ui::adaugare_participant *ui;
    participantDao *pd;
};

#endif // ADAUGARE_PARTICIPANT_H