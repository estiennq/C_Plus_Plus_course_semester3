#include "EntierContraint.h"
#include <iostream>
#include <string>
using namespace std;
// A COMPLETER

EntierContraint::EntierContraint(int min, int max, int val): min(min),max(max),val(val){
    if (val > this->max || val < this->min || max < min){
        throw "erreur";
    }
}

int EntierContraint::getMin() const {
    return this->min;
}

int EntierContraint::getMax() const {
    return this->max;
}

int EntierContraint::getVal() const {
    return this->val;
}

void EntierContraint::setVal(int val) {
    if (val > this->max || val < this->min){
        throw "erreur";
    }
    this->val = val;
}

void EntierContraint::saisir(istream &entree) {
    cout << "Entrez la valeur minimum de l'entier : ";
    entree >> this->min;
    cout << "Entrez la valeur maximum de l'entier : ";
    int max;
    entree >> max;
    if (max < min){
        throw "erreur";
    }else{
        this->max = max;
    }
    entree >> this->max;
    cout << "Entrez la valeur de l'entier : ";
    int val;
    entree >> val;
    if (val < min || val > max){
        throw "erreur";
    } else{
        this->val = val;
    }
}


void EntierContraint::afficher(std::ostream &sortie)  {
    sortie << "Minimum de l'entier : " << this->getMin() << "\n Maximum de l'entier :" << this->getMax() << "\nValeur de l'entier : " << this->getVal() << endl;
}

