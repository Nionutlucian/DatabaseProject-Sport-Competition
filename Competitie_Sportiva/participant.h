#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include<QString>

class Participant
{
public:
    Participant();
    Participant(int id,QString nume,QString prenume,QString tara,int greutate,int varsta,QString gen,QString cnp,QString nume_club,QString categorie,int punctaj);
    int getID();
    QString getNume();
    QString getPrenume();
    QString getTara();
    int getGreutate();
    int getVarsta();
    QString getGen();
    QString getCnp();
    QString getClub();
    QString getCategorie();
    int getPunctaj();
private:
    int id;
    QString nume;
    QString prenume;
    QString tara;
    int greutate;
    int varsta;
    QString gen;
    QString cnp;
    QString nume_club;
    QString categorie;
    int punctaj;
};

#endif // PARTICIPANT_H
