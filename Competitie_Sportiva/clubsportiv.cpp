#include "clubsportiv.h"

clubsportiv::clubsportiv()
{

}

clubsportiv::clubsportiv(int id,QString denumire,QString tara,QString adresa){
    this->id = id;
    this->denumire = denumire;
    this->tara = tara;
    this->adresa = adresa;
}

QString clubsportiv::getAdresa(){
    return this->adresa;
}
QString clubsportiv::getDenumire(){
    return this->denumire;
}
int clubsportiv::getID(){
    return this->id;
}
QString clubsportiv::getTara(){
    return this->tara;
}
