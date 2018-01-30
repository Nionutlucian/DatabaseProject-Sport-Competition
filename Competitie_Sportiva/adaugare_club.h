#ifndef ADAUGARE_CLUB_H
#define ADAUGARE_CLUB_H

#include <QDialog>

namespace Ui {
class adaugare_club;
}

class adaugare_club : public QDialog
{
    Q_OBJECT

public:
    explicit adaugare_club(QWidget *parent = 0);
    ~adaugare_club();

private:
    Ui::adaugare_club *ui;
};

#endif // ADAUGARE_CLUB_H
