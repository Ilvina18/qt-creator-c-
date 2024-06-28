#include "formpengguna.h"

#include <QApplication>
#include <pengguna.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //formPengguna w;
    //w.show();

    pengguna k;
    k.setNIK("6309035805000003");
    k.setNAMA("Gusti Tri Ilvina Sari");
    k.setEMAIL("gustitriilvinasari18@gmail.com");
    k.setALAMAT("Jl. J. Badaruddin ds. Tanta kec. Tanta KKab. Tabalong");
    k.setTELP("05753962328");
    k.setJenisternak("sapi");
    k.setStatusBeli("cash");
    qDebug()<<"NIK"<<k.getNIK()<<"\n";
    qDebug()<<"NAMA"<<k.getNAMA()<<"\n";
    qDebug()<<"EMAIL"<<k.getEMAIL()<<"\n";
    qDebug()<<"ALAMAT"<<k.getALAMAT()<<"\n";
    qDebug()<<"TELP"<<k.getTELP()<<"\n";
    qDebug()<<"HARGA TERNAK"<<k.getHargaTernak()<<"\n";
    qDebug()<<"HARGA STATUS"<<k.getHargaBeli()<<"\n";
    qDebug()<<"HARGA TOTAL"<<k.getHargaTotal()<<"\n";

    return a.exec();
}
