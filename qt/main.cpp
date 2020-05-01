#include <QApplication>
#include "AskRegistering.h"
#include "AlignmentParameters.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    AlignmentParameters ask;
    
    ask.show();
    
    return app.exec();
}
