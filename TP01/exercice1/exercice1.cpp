#include <cstdlib>
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

void testClassePoint(std::string nom,int x,int y){



    Point p;
    p.afficher();
 //   p->afficher();
  //  std::cout << "saisir un point : nom puis x puis y\n";
  //  p->saisir();
  //  p->afficher();
//    cout << "======" << endl <<"Test de getX()" << endl
//         << "Valeur attendue : " << x << endl
//         << "Valeur obtenue : " << p->getX() << endl
//         << (p->getX()==x ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de getY()" << endl
//         << "Valeur attendue : " << y << endl
//         << "Valeur obtenue : " << p->getY() << endl
//         << (p->getY()==y ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de getNom()" << endl
//         << "Valeur attendue : " << nom << endl
//         << "Valeur obtenue : " << p->getNom() << endl
//         << (p->getNom()==nom ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de afficher()" << endl
//         << "Valeur attendue : " << x << endl
//         << "Valeur obtenue : " <<  endl
//         << (p->getX()==x ? "Succès" : "Echec") << endl;
}

void testClassePointDynamique(std::string nom,int x,int y){



    Point *p = new Point;
    p->afficher();
    //   p->afficher();
    //  std::cout << "saisir un point : nom puis x puis y\n";
    //  p->saisir();
    //  p->afficher();
//    cout << "======" << endl <<"Test de getX()" << endl
//         << "Valeur attendue : " << x << endl
//         << "Valeur obtenue : " << p->getX() << endl
//         << (p->getX()==x ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de getY()" << endl
//         << "Valeur attendue : " << y << endl
//         << "Valeur obtenue : " << p->getY() << endl
//         << (p->getY()==y ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de getNom()" << endl
//         << "Valeur attendue : " << nom << endl
//         << "Valeur obtenue : " << p->getNom() << endl
//         << (p->getNom()==nom ? "Succès" : "Echec") << endl;
//
//    cout << "======" << endl << "Test de afficher()" << endl
//         << "Valeur attendue : " << x << endl
//         << "Valeur obtenue : " <<  endl
//         << (p->getX()==x ? "Succès" : "Echec") << endl;
}

int main(int argc, char** argv) {
    string test = "fff";
    string &reftest = test;
    // à compléter
//    testClassePoint(reftest,2,6);
    testClassePointDynamique(reftest,2,6);




}

