#include <QtCore/QCoreApplication>
#include "Communication.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	Communication comm;

	return a.exec();
}
