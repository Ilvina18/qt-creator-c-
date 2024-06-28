#ifndef TRANSAKSI_H
#define TRANSAKSI_H

#include <QDialog>

namespace Ui {
class Transaksi;
}

class Transaksi : public QDialog
{
    Q_OBJECT

public:
    explicit Transaksi(QWidget *parent = nullptr);
    ~Transaksi();

private:
    Ui::Transaksi *ui;
};

#endif // TRANSAKSI_H
