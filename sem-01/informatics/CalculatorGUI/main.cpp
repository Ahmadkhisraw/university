#include "calculatorgui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorGUI w;
    w.show();
    return a.exec();
}
