#ifndef BILLET_H
#define BILLET_H

#include <iostream>
#include <iomanip>

#include "Trajet.h"
#include "Tarif.h"

class Billet {
// A COMPLETER
public:
    Billet( Trajet  const & untrajet, Tarif const & tarif);
    Trajet const & getTrajet() const;
    Tarif const & getTarif() const;
    virtual float getPrix() const;
    virtual void afficher() const;
private:
    Trajet const & m_trajet;
    Tarif const & m_tarif;
};

std::ostream & operator<<(std::ostream & sortie, const Billet & billet);
#endif