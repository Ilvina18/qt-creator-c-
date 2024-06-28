#ifndef PENGGUNA_H
#define PENGGUNA_H
#include <ternak.h>
#include <transaksi.h>
#include <QString>

class pengguna : public ternak
{
public:
    pengguna();// constructor 1
    pengguna(QString nik, QString jenisternak, QString status, int jumlah,
             QString nama, QString email, QString alamat, QString telp);// constructor 2 (Overload Constructor)

    void setNIK(QString NIK);
    QString getNIK();

    void setNAMA(QString NAMA);
    QString getNAMA();

    void setEMAIL(QString EMAIL);
    QString getEMAIL();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTELP(QString TELP);
    QString getTELP();


private:
    QString nik,nama,email,alamat,telp;
};

#endif // PENGGUNA_H
