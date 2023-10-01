// Les 2 directives ci-cessous permettent d'éviter les problèmes d'inclusions multiples d'une même classe
#ifndef POINT_H
#define POINT_H

// On inclut les librairies utilisées dans le fichier
#include <iostream>
#include <string>
// Attention : pas de clause "using namespace" dans un fichier ".h" !
using namespace std;

class Point {

    // A COMPLETER - Spécifier la classe Point
public :
    Point(int  x = X_DEF , int y = Y_DEF,string nom = NOM_DEF);

    ~Point();

    string getNom() const;
    int getX() const;
    int getY() const;

    void setNom(string nom);
    void setX(int x);
    void setY(int y);

    void saisir(istream &entree = std::cin);
    void afficher(ostream &sortie = std::cout) const;



private: // membres privés
// attributs d'instance
    int x;
    int y;
    string nom;
// constantes de classe
    static const int X_DEF;
    static const int Y_DEF;
    static const string NOM_DEF;

};

#endif /* POINT_H */

