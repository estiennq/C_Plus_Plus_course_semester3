#ifndef SALARIEEXCEPTION_H
#define SALARIEEXCEPTION_H
#include <stdexcept>


// A Compléter

// Toutes les exceptions de la classe Salarie seront dues à des valeurs non conformes (nom, numéro SS ou salaire)
// On va donc faire dériver SalarieException de domain_error qui est l'exception prédéfinie dans <stdexcept> pour ce genre de situation

class SalarieException : public std::domain_error{

};

class NomIncorrectException : public  SalarieException{
};

class NumeroIncorrectException : public  SalarieException{
};

class SalaireIncorrectException : public  SalarieException{
};

#endif /* SALARIEEXCEPTION_H */

