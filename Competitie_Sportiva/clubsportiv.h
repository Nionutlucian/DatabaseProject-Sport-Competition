#ifndef CLUBSPORTIV_H
#define CLUBSPORTIV_H
#include<QString>

class clubsportiv
{
public:
    clubsportiv();
    clubsportiv(int id,QString denumire,QString tara,QString adresa);
    int getID();
    QString getDenumire();
    QString getTara();
    QString getAdresa();
private:
    int id;
    QString denumire;
    QString tara;
    QString adresa;
};

#endif // CLUBSPORTIV_H
