#include "pengguna.h"

pengguna::pengguna() {}

pengguna::pengguna(QString nik, QString jenisternak, QString status, int jumlah, QString nama, QString email, QString alamat, QString telp)
{
    this->nik = nik;
    this->setJenisternak(jenisternak);
    this->setStatusBeli(status);
    this->setJumlahTernak(jumlah);
    this->nama = nama;
    this->email = email;
    this->alamat = alamat;
    this->telp = telp;
}

void pengguna::setNIK(QString NIK)
{
    this->nik = NIK;
}

QString pengguna::getNIK()
{
    return this->nik;
}

void pengguna::setNAMA(QString NAMA)
{
    this->nama = NAMA;
}

QString pengguna::getNAMA()
{
    return this->nama;
}

void pengguna::setEMAIL(QString EMAIL)
{
    this->email = EMAIL;
}

QString pengguna::getEMAIL()
{
    return this->email;
}

void pengguna::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString pengguna::getALAMAT()
{
    return this->alamat;
}

void pengguna::setTELP(QString TELP)
{
    this->telp = TELP;
}

QString pengguna::getTELP()
{
    return this->telp;
}
