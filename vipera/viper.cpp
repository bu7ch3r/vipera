#include "viper.h"
#include "ui_viper.h"

Viper::Viper(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Viper)
{
    ui->setupUi(this);
}

Viper::~Viper()
{
    delete ui;
}
