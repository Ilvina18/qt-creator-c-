#include "formpengguna.h"
#include "ui_formpengguna.h"

formPengguna::formPengguna(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formPengguna)
{
    ui->setupUi(this);
}

formPengguna::~formPengguna()
{
    delete ui;
}
