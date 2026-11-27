#include <QtTest>
#include "registre_tests.h"
// Test "temoin" : il ne verifie rien du projet. Sa seule mission est de prouver que la chaine
// de test fonctionne (compilation, enregistrement, execution, comptage).
class TestDemarrage : public QObject
{
    Q_OBJECT
    
private slots:
    void la_chaine_de_test_fonctionne()
    {
        QCOMPARE(1 + 1, 2);
    }
};
DECLARER_TEST(TestDemarrage)
#include "test_demarrage.moc"