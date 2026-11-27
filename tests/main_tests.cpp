#include <QCoreApplication>
#include <QtDebug>

#include "registre_tests.h"

int main(int argc, char *argv[])
{
    QCoreApplication application(argc, argv);

    if (RegistreTests::lanceurs().isEmpty()) {
        // Un executable qui ne lance rien afficherait "0 echec" : on refuse ce faux succes.
        qCritical() << "Aucun test enregistre : verifier tests.pro (relancer qmake).";
        return 1;
    }

    int nombre_echecs = 0;
    for (const RegistreTests::Lanceur &lanceur : RegistreTests::lanceurs()) {
        nombre_echecs += lanceur(argc, argv);
    }
    return nombre_echecs;
}