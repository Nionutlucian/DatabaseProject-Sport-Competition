#include "participant.h"

Participant::Participant()
{

}

Participant::Participant(int id, QString nume, QString prenume, QString tara, int greutate, int varsta, QString gen,QString cnp)
{
    this->id = id;
    this->nume = nume;
    this->prenume = prenume;
    this->tara = tara;
    this->greutate = greutate;
    this->varsta = varsta;
    this->gen = gen;
    this->cnp = cnp;
}

int Participant::getID(){
    return this->id;
}

QString Participant::getCnp(){
    return this->cnp;
}

QString Participant::getNume()
{
    return this->nume;
}

QString Participant::getPrenume()
{
    return this->prenume;
}

QString Participant::getTara()
{
    return this->tara;
}

int Participant::getGreutate()
{
    return this->greutate;
}

int Participant::getVarsta()
{
    return this->varsta;
}

QString Participant::getGen()
{
    return this->gen;
}
