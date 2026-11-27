#include <QApplication>
#include "ui/fenetre_principale.h"
int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    // Ces deux noms doivent etre fixes AVANT toute ouverture de base : Qt s'en sert pour
    // choisir le dossier de donnees (QStandardPaths). Sans eux, ce dossier porte le nom
    // de l'executable, qui change d'une machine a l'autre.
    QCoreApplication::setOrganizationName(QStringLiteral("IFRI-G16"));
    QCoreApplication::setApplicationName(QStringLiteral("Cashflood"));

    FenetrePrincipale fenetre;
    fenetre.show();

    return application.exec();
}
