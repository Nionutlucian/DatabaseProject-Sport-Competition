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
    void addParticipant(Participant& p);
    std::vector<Participant> getParticipanti();
private:
    MainWindow* mw;
    QSqlDatabase m_db;
};

#endif // PARTICIPANTDAO_H
