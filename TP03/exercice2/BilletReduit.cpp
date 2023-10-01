#include <iostream>
#include "BilletReduit.h"
using namespace std;

// A COMPLETER
BilletReduit::BilletReduit(const Trajet &unTrajet, const Tarif &unTarif, Promotion &unePromo): Billet(unTrajet,unTarif),m_promotion(unePromo) {}

Promotion const & BilletReduit::getPromotion() const {
    return this->m_promotion;
}

float BilletReduit::getPrix() const{
    return this->getPromotion().calculePrixReduit(Billet::getPrix());
}

void BilletReduit::afficher() const {
    cout << "=========" << endl << this->getTrajet() << endl << this->getTarif() << endl << this->getPromotion() << endl << this->getPrix();
}