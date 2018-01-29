#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include<QString>

class Participant
{
public:
    Participant();
    Participant(int id,QString nume,QString prenume,QString tara,int greutate,int varsta,QString gen);
    int getID();
    QString getNume();
    QString getPrenume();
    QString getTara();
    int getGreutate();
    int getVarsta();
    QString getGen();

private:
    int id;
    QString nume;
    QString prenume;
    QString tara;
    int greutate;
    int varsta;
    QString gen;
};

#endif // PARTICIPANT_H
