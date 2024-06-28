#ifndef FORMPENGGUNA_H
#define FORMPENGGUNA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class formPengguna;
}
QT_END_NAMESPACE

class formPengguna : public QMainWindow
{
    Q_OBJECT

public:
    formPengguna(QWidget *parent = nullptr);
    ~formPengguna();

private:
    Ui::formPengguna *ui;
};
#endif // FORMPENGGUNA_H
