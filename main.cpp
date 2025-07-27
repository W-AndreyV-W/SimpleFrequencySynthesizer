#include "simplefrequencysynthesizer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleFrequencySynthesizer w;
    w.show();

    return a.exec();
}
