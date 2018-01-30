#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include<QString>

class Participant
{
public:
    Participant();
    Participant(int id,QString nume,QString prenume,QString tara,int greutate,int varsta,QString gen,QString cnp);
    int getID();
    QString getNume();
    QString getPrenume();
    QString getTara();
    int getGreutate();
    int getVarsta();
    QString getGen();
    QString getCnp();
private:
    int id;
    QString nume;
    QString prenume;
    QString tara;
    int greutate;
    int varsta;
    QString gen;
    QString cnp;
};

#endif // PARTICIPANT_H
