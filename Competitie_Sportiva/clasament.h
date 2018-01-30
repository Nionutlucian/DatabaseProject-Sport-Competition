#ifndef CLASAMENT_H
#define CLASAMENT_H
#include <QDialog>
#include "participantdao.h"
#include"participant.h"
#include"mainwindow.h"


namespace Ui {
class clasament;
}

class clasament : public QDialog
{
    Q_OBJECT

public:
    explicit clasament(QWidget *parent = 0);
    ~clasament();

private slots:
    void on_b_afisezaclasament_clicked();

    void on_b_inapoi_clicked();

private:

    Ui::clasament *ui;
    participantDao *pd;
    MainWindow *mw;

};

#endif // CLASAMENT_H
