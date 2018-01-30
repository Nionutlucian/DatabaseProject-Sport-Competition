#include "categorie.h"

categorie::categorie()
{

}

categorie::categorie(int id,QString nume_categorie,int varsta_minima,int varsta_maxima,int greutate_minima,int greutate_maxima,QString sex_participant){
    this->id = id;
    this->nume_categorie = nume_categorie;
    this->varsta_maxima = varsta_maxima;
    this->varsta_minima = varsta_minima;
    this->greutate_maxima = greutate_maxima;
    this->greutate_minima = greutate_minima;
    this->sex_participant = sex_participant;
}
int categorie::getGreutateMaxima(){
    return this->greutate_maxima;
}
int categorie::getGreutateMinima(){
    return this->greutate_minima;
}
int categorie::getID(){
    return this->id;
}
QString categorie::getNume(){
    return this->nume_categorie;
}
QString categorie::getSexParticipant(){
    return this->sex_participant;
}
int categorie::getVarstaMaxima(){
    return this->varsta_maxima;
}
int categorie::getVarstaMinima(){
    return this->varsta_minima;
}
