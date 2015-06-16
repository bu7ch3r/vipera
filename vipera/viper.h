#ifndef VIPER_H
#define VIPER_H

#include <QMainWindow>

namespace Ui {
class Viper;
}

class Viper : public QMainWindow
{
    Q_OBJECT

public:
    explicit Viper(QWidget *parent = 0);
    ~Viper();

private:
    Ui::Viper *ui;
};

#endif // VIPER_H
