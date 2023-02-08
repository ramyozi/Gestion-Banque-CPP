/*
 * Compte.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef COMPTE_H
#define COMPTE_H

#pragma once
#include "Date.h"

//Définition d'une classe mère abstraite "Compte" qui inclue une classe "Date"
class Compte
{

//Définition des attributs en protected (accessibles par la classe elle même et les classes qui héritent)
protected:
    int num_compte;
    Date creation_de_compte;
    double solde;
    string type_compte;
    vector <double> Tab_historique;

public:
//Constructeur par défaut
    Compte();
//Constructeur par paramètres
    Compte(int num_compte, double solde, string type_compte, Date creation_de_compte= {1,1,2023});
//Destructeur
    ~Compte();
//Définition des fonctions membres (en virtual car surchargées dans les classes filles)
    virtual void Afficher()=0;//Fonction virtuelle pure = rend la classe abstraite
    virtual void Saisir();
    //virtual void Supp_compte();
    virtual void Afficher_Taux_interet();
    virtual void Afficher_solde();
    virtual void Afficher_date();
    virtual void Afficher_plafond();
    virtual void Ajout_Argent(double somme);
    virtual void retrait_Argent(double somme);
    virtual void Decouvert();
    virtual void Afficher_Dix_operations();
    virtual void Calcul_Agios();
    virtual void Afficher_echeance();


};

#endif