#ifndef ADAUGARE_PARTICIPANT_H
#define ADAUGARE_PARTICIPANT_H

#include <QDialog>
#include<QString>
#include "participantdao.h"
#include "mainwindow.h"
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

    void on_b_categorie_clicked();

    void on_b_inapoi_clicked();

private:
    Ui::adaugare_participant *ui;
    participantDao *pd;
    MainWindow *mw;

};

#endif // ADAUGARE_PARTICIPANT_H
