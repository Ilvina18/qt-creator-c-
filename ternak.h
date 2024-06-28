#ifndef TERNAK_H
#define TERNAK_H
#include <QString>

class ternak
{
public:
    ternak();

    void setJenisternak(QString jenisternak);
    int getHargaTernak();

    void setStatusBeli(QString status);
    int getHargaBeli();

    void setJumlahTernak(int jumlah);

    int getHargaTotal();

private:
    QString jenisternak,status;
    int hargaTernak,hargaBeli;
    int jumlahTernak;
};

#endif // TERNAK_H
