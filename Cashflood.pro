# Projet de l'application Ca$hfl00d.
# Ce fichier ne liste AUCUN fichier source : chaque couche tient sa propre liste
# (core.pri, ui.pri, bonus.pri) pour que deux personnes ne modifient jamais la meme ligne.
# sql est demande des M0 : il ne coute rien et M1 en a besoin (erreur sinon : QSqlDatabase introuvable).
QT += core gui widgets sql
# C++11 : le standard que le Qt 5.12.12 du professeur accepte sans reglage.
CONFIG += c++11
TARGET = Cashflood
TEMPLATE = app
# Fait signaler par le compilateur l'usage de fonctions Qt obsoletes
# (elles disparaissent dans les versions futures de Qt).
DEFINES += QT_DEPRECATED_WARNINGS
# Permet d'ecrire #include "core/modele/compte.h" depuis n'importe quel fichier.
INCLUDEPATH += $$PWD/src
# Chemins relatifs uniquement : le projet doit compiler tel quel sur la machine du professeur.
include($$PWD/src/core/core.pri)
include($$PWD/src/ui/ui.pri)
include($$PWD/src/bonus/bonus.pri)
SOURCES += $$PWD/src/main.cpp