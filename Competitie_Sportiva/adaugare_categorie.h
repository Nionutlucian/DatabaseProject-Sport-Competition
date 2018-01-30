#ifndef ADAUGARE_CATEGORIE_H
#define ADAUGARE_CATEGORIE_H

#include <QDialog>
#include"categoriedao.h"
#include "mainwindow.h"

namespace Ui {
class adaugare_categorie;
}

class adaugare_categorie : public QDialog
{
    Q_OBJECT

public:
    explicit adaugare_categorie(QWidget *parent = 0);
    ~adaugare_categorie();

private slots:
    void on_b_adaugacategorie_clicked();

    void on_pushButton_clicked();

private:
    Ui::adaugare_categorie *ui;
    categoriedao *cat;
    MainWindow *mw;
};

#endif // ADAUGARE_CATEGORIE_H
