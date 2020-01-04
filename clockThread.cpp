#include "clockThread.h"

ClockThread::ClockThread(QSqlDatabase* dbconn, QObject* parent){
    this->dbconn = dbconn;
}

void ClockThread::run(){
    while (true) {
        emit sigDateTime(parseCurrentDateTime());
        emit sigValidateConn(validateConn());
        this->msleep(1000);
    }
}

QString ClockThread::parseCurrentDateTime(){
    return QDateTime::currentDateTime().toString("yyyy.mm.dd hh:mm:ss");
}

bool ClockThread::validateConn(){
    return dbconn->isOpen();
}
