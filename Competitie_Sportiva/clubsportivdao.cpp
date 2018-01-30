#include "clubsportivdao.h"

clubsportivdao::clubsportivdao()
{

}

bool clubsportivdao::addClubsportiv(clubsportiv club){
    QSqlQuery query(mw->getDataBase());
    query.prepare("INSERT INTO club_sportiv values(:id, :denumire, :tara, :adresa)");
    query.bindValue(":id", club.getID());
    query.bindValue(":denumire", club.getDenumire());
    query.bindValue(":tara", club.getTara());
    query.bindValue(":adresa",club.getAdresa());
    return query.exec();
}
