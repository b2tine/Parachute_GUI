#include "c9_wizard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    C9_Wizard c9_wizard;

    c9_wizard.setWindowTitle("C9 Wizard");
    c9_wizard.setFixedSize(900,700);
    c9_wizard.show();


    return a.exec();
}
