#ifndef ADAUGARE_CLUB_H
#define ADAUGARE_CLUB_H

#include <QDialog>
#include"clubsportivdao.h"
#include "mainwindow.h"

namespace Ui {
class adaugare_club;
}

class adaugare_club : public QDialog
{
    Q_OBJECT

public:
    explicit adaugare_club(QWidget *parent = 0);
    ~adaugare_club();

private slots:
    void on_pushButton_clicked();

    void on_b_inapoi_clicked();

private:
    Ui::adaugare_club *ui;
    clubsportivdao *cs;
    MainWindow *mw;
};

#endif // ADAUGARE_CLUB_H
