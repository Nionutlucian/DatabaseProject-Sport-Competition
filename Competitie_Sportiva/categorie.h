#ifndef CATEGORIE_H
#define CATEGORIE_H
#include<QString>

class categorie
{
public:
    categorie();
    categorie(int id,QString nume_categorie,int varsta_minima,int varsta_maxima,int greutate_minima,int greutate_maxima,QString sex_participant);
    int getID();
    QString getNume();
    int getVarstaMinima();
    int getVarstaMaxima();
    int getGreutateMinima();
    int getGreutateMaxima();
    QString getSexParticipant();
private:
    int id;
    QString nume_categorie;
    int varsta_minima;
    int varsta_maxima;
    int greutate_minima;
    int greutate_maxima;
    QString sex_participant;

};

#endif // CATEGORIE_H
