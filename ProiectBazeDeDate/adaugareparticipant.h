#ifndef ADAUGAREPARTICIPANT_H
#define ADAUGAREPARTICIPANT_H

#include <QWidget>

namespace Ui {
class AdaugareParticipant;
}

class AdaugareParticipant : public QWidget
{
    Q_OBJECT

public:
    explicit AdaugareParticipant(QWidget *parent = 0);
    ~AdaugareParticipant();

    void setParticipant(const QString &nume_participant, const QString &prenume_participant, const QString &tara_participant, const int &varsta_participant, const int &greutate_participant, const int &experienta_participant);
    void getParticipant(const QString &nume_participant, const QString &prenume_participant, const QString &tara_participant, const int &varsta_participant, const int &greutate_participant, const int &experienta_participant);

private:
    Ui::AdaugareParticipant *ui;
};

#endif // ADAUGAREPARTICIPANT_H
