# Projet de tests SEPARE de l'application : un probleme de test ne peut jamais empecher
# le professeur de compiler Cashflood.pro. Il se lance a part (ouvrir ce fichier dans Qt Creator).
# Pas de "gui" : les tests ne creent aucune fenetre. testlib fournit QtTest.
QT += core sql testlib
QT -= gui
CONFIG += c++11 console
CONFIG -= app_bundle
TARGET = tests
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
# "core" tel qu'il est livre : on inclut le MEME core.pri que l'application.
INCLUDEPATH += $$PWD/../src $$PWD
include($$PWD/../src/core/core.pri)
HEADERS += $$PWD/registre_tests.h
SOURCES += $$PWD/main_tests.cpp
# Tous les fichiers test_*.cpp sont pris automatiquement : personne n'a de ligne a ajouter.
# Apres avoir cree un NOUVEAU fichier de test : Construire -> Executer qmake.
SOURCES += $$files($$PWD/test_*.cpp)