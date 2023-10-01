#include "Visage.h"
#include <iostream>
using namespace std;

// A COMPLETER : IMPLEMENTER LES METHODES DE LA CLASSE VISAGE (ET L'OPERATEUR <<)

Visage::Visage(int longueurNez, const Ethnie &uneEthnie): m_monNez(longueurNez),m_monEthnie(uneEthnie),m_maMoustache(nullptr),m_mesBoutons(),m_monChapeau(nullptr),m_mesBijoux(){

}

void Visage::setMoustache(int largeur) {
    this->m_maMoustache = new Moustache(largeur);
}

void Visage::addBouton(int diametre) {
    this->m_mesBoutons.push_back(Bouton(diametre));
}

void Visage::setChapeau(const Chapeau &unChapeau) {
    this->m_monChapeau = & unChapeau;
}

void Visage::addBijou(const Bijou &unBijou) {
    this->m_mesBijoux.push_back(& unBijou);
}

const Visage &Visage::operator=(const Visage &unVisage) {
    // on supprime la moustache si elle existe
    if (this->m_maMoustache != nullptr) delete this->m_maMoustache;
    // on clone la moustache de unVisage si il en a une
    if (unVisage.m_maMoustache == nullptr) this->m_maMoustache = nullptr;
    else this->m_maMoustache = new Moustache(*(unVisage.m_maMoustache));
    this->m_monChapeau = new Chapeau(unVisage.m_monChapeau->getPoids());
    for (Bijou const *bijou : unVisage.m_mesBijoux) {
        addBijou(*bijou);
    }
    for (Bouton bouton : unVisage.m_mesBoutons) {
        addBouton(bouton.getDiametre());
    }
    return *this;
}

Visage::Visage(const Visage &unVisage): m_monNez(unVisage.m_monNez),m_monEthnie(unVisage.m_monEthnie),m_mesBijoux(unVisage.m_mesBijoux),m_mesBoutons(unVisage.m_mesBoutons){
    if (unVisage.m_maMoustache == nullptr)this->m_maMoustache = nullptr;
    else this->m_maMoustache = new Moustache(*(unVisage.m_maMoustache));
    if (unVisage.m_monChapeau == nullptr)this-> m_monChapeau = nullptr;
    else this->m_monChapeau = new Chapeau(unVisage.m_monChapeau->getPoids());

}

Visage::~Visage() {
    if(this->m_maMoustache != nullptr) delete this->m_maMoustache;
}

std::ostream &operator<<(std::ostream &sortie, const Visage &visage) {
    sortie << "attributs du visage" << endl << visage.m_monEthnie << endl << visage.m_monNez << endl;
    if (visage.m_maMoustache == nullptr){
        sortie << "pas de moustache" << endl;
    }else{
        sortie << *visage.m_maMoustache<< endl;
    }
    if (visage.m_monChapeau == nullptr){
        sortie << "pas de chapeau" << endl;
    } else{
        sortie << *visage.m_monChapeau << endl;
    }
    for (Bouton bouton : visage.m_mesBoutons ) {
        sortie << bouton << endl;
    }
    for (Bijou const * bijou: visage.m_mesBijoux) {
        sortie << *bijou << endl;
    }



    return sortie;
}