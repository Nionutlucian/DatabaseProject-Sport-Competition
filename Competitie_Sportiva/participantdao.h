#ifndef PARTICIPANTDAO_H
#define PARTICIPANTDAO_H
#include<QString>
#include<QSqlDatabase>
#include <QSqlQuery>
#include "mainwindow.h"
class Participant;

class participantDao
{
public:
    participantDao();
    bool addParticipant(Participant p);
    std::vector<QString> selectClubSportiv();
    std::vector<QString> gasesteCategorie(int varsta,int greutate,QString sex);
    std::vector<Participant> getParticipanti();

private:
    MainWindow *mw;
    QSqlDatabase m_db;
};

#endif // PARTICIPANTDAO_H
