#include <cstdlib>
#include <iostream>
#include "EntierContraint.h"
using namespace std;

int main(int argc, char** argv) {
    
    // A Compléter
    // Il faut tester operator int, operator << et operator >> sur la classe EntierContraint
    EntierContraint ec(5,0,100);
    int i;
    i = ec;
    cout << "test affectation : int()" <<endl
        << "valeur attendue : " << ec.getVal() << endl
        << "valeur obtenue : " << i << endl
        << ((i)==(ec.getVal()) ? "Succes" : "Echec") << endl;

    cout << "test affectation : int()+1" <<endl
         << "valeur attendue : " << ec.getVal()+1 << endl
         << "valeur obtenue : " << i+1 << endl
         << ((i+1)==(ec.getVal()+1) ? "Succes" : "Echec") << endl;

    cout << "entrez un entier contraint : ";
    cin >> ec;
    cout << ec;

    cout << "\nchangement de ec avec un int : ";
    ec = i;
    cout << ec;




    return 0;
}

