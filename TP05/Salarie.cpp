#include "Salarie.h"
#include "SalarieException.h"
#include <ctype.h>
#include <map>
#include <limits>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// A COMPLETER : Implémenter les méthodes d'instance de la classe Salarie

// Constantes de classe
const float                  Salarie::SMIC          = 1257.0f;
const float                  Salarie::COEFF_SMIC    = 500.0f;
const std::string            Salarie::NOM_DEF       = "Martin";
const std::string            Salarie::NUMERO_SS_DEF = "1234567890123";
const std::map<float, float> Salarie::TRANCHES_IMPOT {
    {  6000.0f, 0.000f},
    { 12000.0f, 0.055f},
    { 26600.0f, 0.140f},
    { 71400.0f, 0.300f},
    {151200.0f, 0.410f},
    {std::numeric_limits<float>::max(), 0.50f} 
};

void Salarie::setNom(const string &Nom) {
    this->m_nom = Nom;
}

void Salarie::setNumeroSs(const string &NumeroSs) {
    this->m_numeroSS = NumeroSs;
}

void Salarie::setSalaireMensuel(const ObjetContraint<float> &SalaireMensuel) {
    this->m_salaireMensuel = SalaireMensuel;
}

const float Salarie::getImpot() const {
    int i = 0;
    map<float,float>::const_iterator it = TRANCHES_IMPOT.begin(); // on utilise un itérateur sur la map
    while (this->getSalaireMensuel()*12 > it->first) { // first correspond à la clef de la map.
        it++;// on passe à la "ligne" suivante
    }
    return it->second; // second correspond à la valeur associé à la clef de la map;




}

void Salarie::saisir(std::istream &entree) {
    string nom;
    cout << "saisir le nom" << flush;
    entree >> nom;
    try {
        this->setNom(nom);
    }catch (SalarieException & e){
        cout << "erreur renvoyé";
    }

}
void Salarie::afficher(std::ostream &sortie) {

}

const string &Salarie::getNom() const {
    return this->m_nom;
}

const string &Salarie::getNumeroSs() const {
    return this->m_numeroSS;
}

const ObjetContraint<float> &Salarie::getSalaireMensuel() const {
    return this->m_salaireMensuel;
}


