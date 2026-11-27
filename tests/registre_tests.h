#ifndef REGISTRE_TESTS_H
#define REGISTRE_TESTS_H
#include <QtTest>
#include <QVector>
#include <functional>
// Plusieurs classes de test dans UN SEUL executable. QTEST_MAIN ecrit un main() par fichier :
// deux fichiers de test dans le meme projet donneraient "multiple definition of main".
// Ici, chaque fichier s'enregistre avec DECLARER_TEST, et main_tests.cpp lance tout.
namespace RegistreTests {
using Lanceur = std::function<int(int, char **)>;
// Fonction (et non variable globale) : la liste est creee au premier usage, ce qui evite
// tout probleme d'ordre d'initialisation entre fichiers.
inline QVector<Lanceur> &lanceurs()
{
    static QVector<Lanceur> liste;
    return liste;
}
struct Enregistreur
{
    explicit Enregistreur(const Lanceur &lanceur) { lanceurs().append(lanceur); }
};

} // namespace RegistreTests

// A placer apres la definition de la classe de test, avant l'inclusion du fichier .moc.
#define DECLARER_TEST(Classe)                                                   
    static RegistreTests::Enregistreur enregistreur_##Classe(                   
        [](int argc, char **argv) {                                             
            Classe test;                                                        
            return QTest::qExec(&test, argc, argv);                             
        });

#endif // REGISTRE_TESTS_H