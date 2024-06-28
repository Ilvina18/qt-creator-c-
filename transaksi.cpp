#include "transaksi.h"
#include "ui_transaksi.h"

Transaksi::Transaksi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Transaksi)
{
    ui->setupUi(this);
}

Transaksi::~Transaksi()
{
    delete ui;
}
