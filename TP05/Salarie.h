#ifndef SALARIE_H
#define	SALARIE_H

#include <string>
#include <iostream>
#include "SalarieException.h"
#include "ObjetContraint.h"
#include <map>
using namespace std;

class Salarie {
public:
    // A COMPLETER : Spécifier les méthodes d'instance d'un Salarie
    Salarie(const std::string & nom = NOM_DEF,const std::string & numeroSS = NUMERO_SS_DEF,const float & salaire = SMIC):m_nom(nom),m_numeroSS(numeroSS), m_salaireMensuel(salaire,SMIC,COEFF_SMIC){
    };

    const string &getNom() const;

    const string &getNumeroSs() const;

    const ObjetContraint<float> &getSalaireMensuel() const;

    const float getImpot() const;

    void saisir(istream & entree);

    void afficher(ostream & sortie);

    void setNom(const string &Nom);

    void setNumeroSs(const string &NumeroSs);

    void setSalaireMensuel(const ObjetContraint<float> &SalaireMensuel);


    // Fourni : Constantes de Classe
    static const float                 SMIC;
    static const float                 COEFF_SMIC;
    static const std::string           NOM_DEF;
    static const std::string           NUMERO_SS_DEF;
    static const std::map<float,float> TRANCHES_IMPOT;

private:
    // A COMPLETER : déclarer les attributs d'instance d'un Salarie
    std::string m_nom;
    std::string m_numeroSS;
    ObjetContraint<float> m_salaireMensuel;
};

#endif	/* SALARIE_H */

