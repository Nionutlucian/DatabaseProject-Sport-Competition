#ifndef ADAUGARE_PARTICIPANT_H
#define ADAUGARE_PARTICIPANT_H

#include <QDialog>

namespace Ui {
class AdaugarePanticipant;
}

class AdaugareParticipant : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemDialog(QWidget *parent = 0);
    ~AddItemDialog();

    void setParticipant(const QString &nume_participant, const QString &prenume_participant, const qint64 &id,const qint64 &varsta_participant,const qint64 &greutate_participant,const qint64 &experienta_participant,const QString &tara_participant);
    void getParticipant(const QString &nume_participant, const QString &prenume_participant, const qint64 &id,const qint64 &varsta_participant,const qint64 &greutate_participant,const qint64 &experienta_participant,const QString &tara_participant);

protected:
    void accept() override;
    void showEvent(QShowEvent *);

private:
    Ui::AddItemDialog *ui;
    AddType m_type;
};


#endif // ADAUGARE_PARTICIPANT_H
