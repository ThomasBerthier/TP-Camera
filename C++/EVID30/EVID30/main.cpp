#include "EVID30.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EVID30 w;
    w.show();
    return a.exec();
}
