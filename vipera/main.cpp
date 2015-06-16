#include "viper.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Viper w;
    w.show();

    return a.exec();
}
