#include "aidi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AIDI w;

    w.show();

    return a.exec();
}
