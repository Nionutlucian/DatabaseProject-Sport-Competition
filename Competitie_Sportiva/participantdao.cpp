#include"participantdao.h"
#include "participant.h"
#include <iostream>
#include <QDebug>
#include <QSqlDatabase>
//#include"mainwindow.h"
#include<vector>

participantDao::participantDao()
{

}

bool participantDao::addParticipant(Participant participant)
{
            // QString x = mw->getDataBase().databaseName();
             //std::cout << x.toStdString() << std::endl;
                QSqlQuery query(mw->getDataBase());
                query.prepare("INSERT INTO participant values(:id_participant, :nume_participant, :prenume_participant, :varsta_participant, :greutate_participant, :tara_participant, :gen_participant, :CNP, :nume_club, :categorie)");
                query.bindValue(":id_participant", participant.getID());
                query.bindValue(":nume_participant", participant.getNume());
                query.bindValue(":prenume_participant", participant.getPrenume());
                query.bindValue(":tara_participant", participant.getTara());
                query.bindValue(":varsta_participant", participant.getVarsta());
                query.bindValue(":greutate_participant", participant.getGreutate());
                query.bindValue(":gen_participant", participant.getGen());
                query.bindValue(":CNP", participant.getCnp());
                query.bindValue(":nume_club", participant.getClub());
                query.bindValue(":categorie",participant.getCategorie());
                return query.exec();
}



std::vector<QString>participantDao::selectClubSportiv()
{
            // QString x = mw->getDataBase().databaseName();
             //std::cout << x.toStdString() << std::endl;
                QSqlQuery query(mw->getDataBase());
                query.prepare("SELECT denumire FROM club_sportiv");
                query.exec();
                std::vector<QString> list;
                int i = 0;
                while(query.next()){
                     QString denumire = query.value(i).toString();
                     list.push_back(denumire);
                     i++;
                 }
                return list;
}

 std::vector<QString> participantDao::gasesteCategorie(int varsta,int greutate,QString sex)
{

    QSqlQuery query(mw->getDataBase());
    query.prepare("SELECT nume_categorie FROM categorie WHERE varsta_minima <=:varsta AND varsta_maxima >=:varsta AND sex_participant =:sex AND greutate_minima <=:greutate AND greutate_maxima >=:greutate");
    query.bindValue(":varsta",varsta);
    query.bindValue(":greutate",greutate);
    query.bindValue(":sex",sex);
    query.exec();
    std::vector<QString> list;
    int i = 0;
    while(query.next()) {

               list.push_back(query.value(i).toString());
          }
    return list;
}


//bool participantDao::exist(Participant participant)
//{
//            // QString x = mw->getDataBase().databaseName();
//             //std::cout << x.toStdString() << std::endl;
//                QSqlQuery query(mw->getDataBase());
//                query.prepare("INSERT INTO participant values(:id_participant, :nume_participant, :prenume_participant, :varsta_participant, :greutate_participant, :tara_participant, :gen_participant,:CNP)");
//                query.bindValue(":id_participant", participant.getID());
//                query.bindValue(":nume_participant", participant.getNume());
//                query.bindValue(":prenume_participant", participant.getPrenume());
//                query.bindValue(":tara_participant", participant.getTara());
//                query.bindValue(":varsta_participant", participant.getVarsta());
//                query.bindValue(":greutate_participant", participant.getGreutate());
//                query.bindValue(":gen_participant", participant.getGen());
//                query.bindValue(":CNP", participant.getCnp());
//                return query.exec();
//}


std::vector<Participant> participantDao::getParticipanti()
{
       QSqlQuery query(mw->getDataBase());
       query.prepare("SELECT * FROM participant");
       query.exec();

       std::vector<Participant> list;
       while(query.next()) {
           int id = query.value("punctaj").toInt();
           QString nume = query.value("nume_participant").toString();
           QString prenume = query.value("prenume_participant").toString();
           QString tara = query.value("tara_participant").toString();
           QString gen = query.value("gen_participant").toString();
           int varsta = query.value("varsta_participant").toInt();
           int greutate = query.value("greutate_participant").toInt();
           QString cnp = query.value("CNP").toString();
           QString nume_club = query.value("nume_club").toString();
           QString categorie = query.value("categorie").toString();
           int punctaj = query.value("punctaj").toInt();

           Participant participant(id, nume, prenume,tara, greutate,varsta, gen,cnp,nume_club,categorie,punctaj);
            list.push_back(participant);
       }

       return list;
}




