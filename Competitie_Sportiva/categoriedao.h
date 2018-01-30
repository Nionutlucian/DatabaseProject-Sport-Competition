#ifndef CATEGORIEDAO_H
#define CATEGORIEDAO_H
#include"categorie.h"
#include"mainwindow.h"
#include<QString>
#include<QSqlDatabase>
#include <QSqlQuery>


class categoriedao
{
public:
    categoriedao();
    bool addCategorie(categorie c);
private:
    MainWindow *mw;
    QSqlDatabase m_db;
};

#endif // CATEGORIEDAO_H
