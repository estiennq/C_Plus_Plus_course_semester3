#ifndef ENTIERCONTRAINT_H
#define ENTIERCONTRAINT_H

#include <iostream>
#include <limits>

using namespace std;

class EntierContraint {
public:
    
    // A COMPLETER
    EntierContraint(int min = MIN_DEF,int max = MAX_DEF,int val = VAL_DEF);
    int getMin() const;
    int getMax() const;
    int getVal() const;

    void setVal(int val);
    void saisir(istream &entree = std::cin);
    void afficher(ostream &sortie = std::cout);

    static const int getValDef();

private:

    // A COMPLETER
    int min,max,val;

    // Constantes de Classe (static) pour définir les valeurs par défaut des attributs d'un entier contraint
    static constexpr int VAL_DEF = 0;
    static constexpr int MIN_DEF = std::numeric_limits<int>::min(); // le plus petit int possible
    static constexpr int MAX_DEF = std::numeric_limits<int>::max(); // le plus grand int possible
};

#endif /* ENTIERCONTRAINT_H */

