#ifndef FENETRE_PRINCIPALE_H
#define FENETRE_PRINCIPALE_H
#include <QMainWindow>
// Fenetre principale : vide au jalon M0, elle recevra la navigation et les pages en M8.
class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = nullptr);
};

#endif // FENETRE_PRINCIPALE_H