#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static QSqlDatabase getDataBase();


private slots:

    void readSettings(QString &hostName, QString &databaseName, QString &userName, QString &password);


    void on_b_gestionare_clicked();

    //void on_b_competitie_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
