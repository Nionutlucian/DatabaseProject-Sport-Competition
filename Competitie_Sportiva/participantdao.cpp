#include "participantdao.h"
#include "participant.h"
participantDao::participantDao()
{

}

void participantDao::addParticipant(Participant& participant)
{
        m_db = mw->getDataBase();
        QSqlQuery query(m_db);
            query.prepare("INSERT INTO participant values(:id_participant, :nume_participant, :prenume_participant, :varsta_participant, :greutate_participant, :tara_participant, :gen_participant");
                query.bindValue(":id_participant", participant.getID());
                query.bindValue(":nume_participant", participant.getNume());
                query.bindValue(":prenume_participant", participant.getPrenume());
                query.bindValue(":tara_participant", participant.getTara());
                query.bindValue(":varsta_participant", participant.getVarsta());
                query.bindValue(":greutate_participant", participant.getGreutate());
                query.bindValue(":gen_participant", participant.getGen());
                int ok = query.exec();
                if(ok == 0)
                {
                   //eroare
                }
}

std::vector<Participant> participantDao::getParticipanti()
{
    m_db = mw->getDataBase();
       QSqlQuery query(m_db);
       query.prepare("SELECT * FROM participant");
       query.exec();

       std::vector<Participant> list;
       while(query.next()) {

           int id = query.value("id_participant").toInt();
           QString nume = query.value("nume_participant").toString();
           QString prenume = query.value("prenume_participanti").toString();
           QString tara = query.value("tara_participant").toString();
           QString gen = query.value("gen_participant").toString();
           int varsta = query.value("varsta_participant").toInt();
           int greutate = query.value("greutate_participant").toInt();

           Participant participant(id, nume, prenume,tara, greutate,varsta, gen);
            list.push_back(participant);
       }

       return list;
}