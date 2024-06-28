#include "ternak.h"

ternak::ternak() {}

void ternak::setJenisternak(QString jenisternak)
{
    this->jenisternak=jenisternak;
}

int ternak::getHargaTernak()
{
    if (this->jenisternak==("sapi"))
    {
        this->hargaTernak=6000000;
    }else if (this->jenisternak=="kambing"){
        this->hargaTernak=800000;
    }
    return this->hargaTernak;
}

void ternak::setStatusBeli(QString status)
{
    this->status=status;
}

int ternak::getHargaBeli()
{
    if (this->status=="cash")
    {
        this->hargaBeli=0;
    }else{
        this->hargaBeli=100000;
    }
    return this->hargaBeli;
}

void ternak::setJumlahTernak(int jumlah)
{
    this->jumlahTernak=jumlah;
}

int ternak::getHargaTotal()
{
    return getHargaTernak()+getHargaBeli();
}
