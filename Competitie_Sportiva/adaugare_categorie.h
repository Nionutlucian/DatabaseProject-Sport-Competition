#ifndef ADAUGARE_CATEGORIE_H
#define ADAUGARE_CATEGORIE_H

#include <QDialog>
#include"categoriedao.h"

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

private:
    Ui::adaugare_categorie *ui;
    categoriedao *cat;
};

#endif // ADAUGARE_CATEGORIE_H
