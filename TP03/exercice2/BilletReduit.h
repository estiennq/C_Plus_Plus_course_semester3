#ifndef BILLETREDUIT_H
#define BILLETREDUIT_H

#include "Billet.h"
#include "Promotion.h"

class BilletReduit : public Billet {
// A COMPLETER
public:
    BilletReduit(Trajet const & unTrajet,Tarif const & unTarif,Promotion & unePromo);
    Promotion const & getPromotion() const;
    float getPrix()const override;
    void afficher() const override;
private:
    Promotion const & m_promotion;
};
#endif