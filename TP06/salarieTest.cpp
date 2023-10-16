#include "gtest/gtest.h"
#include <map>
#include "Salarie.h"
#include "SalarieException.h"
using namespace std;

TEST(SalarieTest, Constructeur) {
    // A COMPLETER : tester Salarie::Salarie
}

TEST(SalarieTest, GetNom) {
    // A COMPLETER : test Salarie::getNom
    Salarie salarie_test1 ("Paul");
    Salarie salarie_test2 ("marge");
    Salarie salarie_test3 ("TOTO");

    EXPECT_EQ(salarie_test1.getNom(),"PAUL");
    EXPECT_EQ(salarie_test2.getNom(),"MARGE");
    EXPECT_EQ(salarie_test3.getNom(),"TOTO");
}

TEST(SalarieTest, SetNom) {
    // A COMPLETER : test Salarie::setNom
    Salarie salarie_test1 ("Paul");

    EXPECT_THROW(salarie_test1.setNom(""),NomIncorrectException);
    EXPECT_THROW(salarie_test1.setNom("-"),NomIncorrectException);
    EXPECT_THROW(salarie_test1.setNom("Paul-"),NomIncorrectException);
    EXPECT_THROW(salarie_test1.setNom("-Paul"),NomIncorrectException);
    EXPECT_THROW(salarie_test1.setNom("@^^@"),NomIncorrectException);
    EXPECT_NO_THROW(salarie_test1.setNom("Jean-Paul"));
    EXPECT_NO_THROW(salarie_test1.setNom("Jean"));

    salarie_test1.setNom("Jean");
    EXPECT_EQ(salarie_test1.getNom(),"JEAN");





}

TEST(SalarieTest, SetNumeroSS) {
    // A COMPLETER : test Salarie::setNumeroSS
    Salarie salarie_test1 ("Paul");

    EXPECT_THROW(salarie_test1.setNumeroSS(""),NumeroIncorrectException);
    EXPECT_THROW(salarie_test1.setNumeroSS("141454"),NumeroIncorrectException);
    EXPECT_THROW(salarie_test1.setNumeroSS("258514"),NumeroIncorrectException);
    EXPECT_THROW(salarie_test1.setNumeroSS("ving-quatre"),NumeroIncorrectException);
    EXPECT_NO_THROW(salarie_test1.setNumeroSS("1234567891011"));
    EXPECT_NO_THROW(salarie_test1.setNumeroSS("2234567891011"));

    salarie_test1.setNumeroSS("1234567891011");
    EXPECT_EQ(salarie_test1.getNumeroSS(),"1234567891011");
}

TEST(SalarieTest, SetSalaire) {
    // A COMPLETER : test Salarie::setSalaire
    Salarie salarie_test1 ("Paul");
    EXPECT_THROW(salarie_test1.setSalaireMensuel(Salarie :: SMIC*Salarie :: COEFF_SMIC+1),SalaireIncorrectException);
    EXPECT_THROW(salarie_test1.setSalaireMensuel(Salarie :: SMIC-1),SalaireIncorrectException);
    EXPECT_NO_THROW(salarie_test1.setSalaireMensuel(Salarie :: SMIC*Salarie :: COEFF_SMIC));
    EXPECT_NO_THROW(salarie_test1.setSalaireMensuel(Salarie :: SMIC));
    EXPECT_NO_THROW(salarie_test1.setSalaireMensuel(Salarie :: SMIC*Salarie :: COEFF_SMIC-1));


    salarie_test1.setSalaireMensuel(6250);
    EXPECT_EQ(salarie_test1.getSalaireMensuel(),6250);



}

TEST(SalarieTest, GetImpot) {
// A COMPLETER : tester Salarie::getImpot
}

