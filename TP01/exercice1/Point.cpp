// Dans le fichier d'implémentation d'une classe, on doit inclure le fichier de spécification de cette classe
#include "Point.h"

using namespace std;

// Et on inclura aussi les librairies utilisées ici
#include <iostream>
#include <string>
// A COMPLETER - Implémenter les méthodes de la classe Point

Point::Point(int x,int y,string nom): x(x),y(y),nom(nom){

}

Point::~Point() {
    std::string s = "suppression du point '" + nom + "' de coordonnées x = "  " y = ";
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}

std::string Point::getNom() const {
    return this->nom;
}
void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

void Point::setNom(string nom) {
    this->nom = nom;
}

void Point::saisir(istream &entree) {
    std::string nom;
    int x,y;
    getline(entree, nom);
    this->setNom(nom);
    entree >> x;
    this->setX(x);
    entree >> y;
    this->setY(y);

}

void Point::afficher(ostream &sortie) const {
    sortie << "nom du point : " << this->getNom() << "\nx=" << this->getX() << "\ny=" << this->getY() << endl;
}

  const int Point::X_DEF = 0;
  const int Point::Y_DEF = 0;
  const string Point::NOM_DEF = "point-defaut";


