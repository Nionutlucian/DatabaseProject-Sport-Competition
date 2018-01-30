#include "categoriedao.h"
#include <iostream>
#include <QDebug>
#include <QSqlDatabase>
#include"mainwindow.h"
categoriedao::categoriedao()
{

}

bool categoriedao::addCategorie(categorie c)
{
    QSqlQuery query(mw->getDataBase());
    query.prepare("INSERT INTO categorie values(:id, :nume_categorie, :varsta_minima, :varsta_maxima, :greutate_minima, :greutate_maxima, :sex_participant)");
    query.bindValue(":id", c.getID());
    query.bindValue(":nume_categorie", c.getNume());
    query.bindValue(":varsta_minima", c.getVarstaMinima());
    query.bindValue(":varsta_maxima",c.getVarstaMaxima());
    query.bindValue(":greutate_minima",c.getGreutateMinima());
    query.bindValue(":greutate_maxima",c.getGreutateMaxima());
    query.bindValue(":sex_participant",c.getSexParticipant());
    return query.exec();
}


