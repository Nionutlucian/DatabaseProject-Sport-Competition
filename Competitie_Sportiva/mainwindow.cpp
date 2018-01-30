#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlField>
#include <QSqlRecord>
#include <QSettings>
#include <QActionGroup>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QDebug>
#include "gestionarecompetitie.h"
//#include "adaugare_participant.h"


static QSqlDatabase m_db;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);



    QString hostName;
    QString databaseName;
    QString userName;
    QString password;
    readSettings(hostName, databaseName, userName, password);
    m_db = QSqlDatabase::addDatabase("QPSQL");
    m_db.setHostName(hostName);
    m_db.setDatabaseName(databaseName);
    m_db.setUserName(userName);
    m_db.setPassword(password);
    bool ok = m_db.open();
    if(!ok)
    {
       ui->statusBar->showMessage(tr("Database not connected!"));
    }
    else
    {
        ui->statusBar->showMessage(tr("Database connected!")+ m_db.databaseName()) ;
    }
   }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::readSettings(QString &hostName, QString &databaseName, QString &userName, QString &password)
{
    qDebug() << "App dir path " << qApp->applicationDirPath();
    QSettings s(qApp->applicationDirPath() + "/DataBase.conf", QSettings::IniFormat);
    hostName = s.value("HOSTNAME").toString();
    databaseName = s.value("DATABASENAME").toString();
    userName = s.value("USERNAME").toString();
    password = s.value("PASSWORD").toString();
    qDebug() << "Settings file name " << s.fileName();
}


QSqlDatabase MainWindow::getDataBase()
 {
     return m_db;
  }

void MainWindow::on_b_gestionare_clicked()
{
    GestionareCompetitie g;
        this->hide();
        g.setModal(true);
        g.exec();
}


