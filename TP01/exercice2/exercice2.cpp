#include <cstdlib>
#include "EntierContraint.h"

using namespace std;

void testEntierContraint(int min,int max,int val){



    EntierContraint entierContraint;
    entierContraint.afficher();
    try {
        entierContraint.saisir();
        cout << "Echec : pas d'exception levée)" << endl;
    }catch (char const * erreur){
        cout << "Succès : exception levée)" << endl;
    }
    entierContraint.afficher();
    try {
        EntierContraint *entierContrainterreur = new EntierContraint(2,4,7);
        cout << "Echec : pas d'exception levée)" << endl;
    }catch (char const * erreur){
        cout << "Succès : exception levée)" << endl;
    }


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
    
    // à compléter
    testEntierContraint(1,2,4);
    return 0;
}

