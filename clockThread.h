#ifndef VALIDATECONNECTIONTHREAD_H
#define VALIDATECONNECTIONTHREAD_H
#include <QThread>
#include <QDateTime>
#include <QDebug>
#include <QSqlDatabase>
class ClockThread : public QThread
{
    Q_OBJECT
public:
    ClockThread(QSqlDatabase* dbconn, QObject* parent = nullptr);
    void run() override;
private:
    QString parseCurrentDateTime();
    bool validateConn();
    QSqlDatabase* dbconn;
signals:
    void sigDateTime(QString datetime);
    void sigValidateConn(bool status);
};

#endif // VALIDATECONNECTIONTHREAD_H
