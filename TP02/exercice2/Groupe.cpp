#include "Groupe.h"
#include "Personne.h"
#include <string>
#include <iostream>

using namespace std;

// A COMPLETER
// Implémenter les méthodes nécessaires pour la forme canonique de COPLIEN


Groupe::Groupe(const Groupe& groupe) {
    for (int i = 0; i < groupe.m_effectif.size(); i++) {
        this->addPersonne(groupe.m_effectif.at(i)->getNom());
    }
    this->setIntitule(groupe.m_intitule);
}

Groupe& Groupe::operator=(const Groupe& groupe){
    for (int i = 0; i < groupe.m_effectif.size(); i++) {
        this->addPersonne(groupe.m_effectif.at(i)->getNom());
    }
    this->setIntitule(groupe.m_intitule);
}

Groupe::~Groupe() {
    for (int i = 0; i < this->m_effectif.size(); i++) {
        //efface le contenu du tableau
        delete(this->m_effectif.at(i));
    }
    // Vide le tableau ( il n'est plus pointé)
    m_effectif.clear();
    m_intitule.clear();
}



Groupe::Groupe(const std::string &intitule)
        : m_intitule(intitule) {
}


///////////////////////////////////////////////////
void Groupe::setIntitule(const std::string &intitule) {
    this->m_intitule = intitule;
}

///////////////////////////////////////////////////
void Groupe::addPersonne(const std::string &nom) {
    this->m_effectif.push_back(new Personne(nom));
}

///////////////////////////////////////////////////
void Groupe::setNomPersonne(unsigned int i,
                            const std::string nom) {
    if (i < this->m_effectif.size())
        this->m_effectif[i]->setNom(nom);
}

///////////////////////////////////////////////////
void Groupe::affiche() const {
    cout << "Groupe " << this->m_intitule << " = { ";
    for (Personne *personne: this->m_effectif)
        cout << personne->getNom() << " ";
    cout << "}" << endl;
}
