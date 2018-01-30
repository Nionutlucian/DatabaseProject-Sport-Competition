#ifndef CLUBSPORTIVDAO_H
#define CLUBSPORTIVDAO_H

#include<QString>
#include<QSqlDatabase>
#include <QSqlQuery>
#include "mainwindow.h"
#include "clubsportiv.h"


class clubsportivdao
{
public:
    clubsportivdao();
    bool addClubsportiv(clubsportiv club);

private:
    MainWindow *mw;
    QSqlDatabase m_db;

};

#endif // CLUBSPORTIVDAO_H
