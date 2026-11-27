#include "fenetre_principale.h"
FenetrePrincipale::FenetrePrincipale(QWidget *parent)
    : QMainWindow(parent)
{
    // tr() : le titre reste traduisible si l'on ajoute une langue plus tard (RT-12).
    setWindowTitle(tr("Ca$hfl00d"));
    resize(900, 600);
}