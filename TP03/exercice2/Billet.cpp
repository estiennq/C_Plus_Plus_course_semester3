#include <iostream>
#include "Billet.h"
using namespace std;

// A COMPLETER

Billet::Billet(const Trajet & trajet,const Tarif & tarif):m_trajet(trajet),m_tarif(tarif) {}

const Tarif & Billet::getTarif() const{
    return this->m_tarif;
}

const Trajet & Billet::getTrajet() const  {
    return this->m_trajet;
}

float Billet::getPrix() const {
    return this->getTrajet().getDistance() * this->getTarif().getPrixAuKm();
}

void Billet::afficher() const {
    cout << "=============" << endl << this->m_trajet << endl << this->m_tarif << endl << "prix : " << this->getPrix() << "euros";
}

std::ostream &operator<<(std::ostream & sortie, const Billet & billet){
billet.afficher();
return sortie;
}




