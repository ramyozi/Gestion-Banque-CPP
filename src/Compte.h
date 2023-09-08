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

class Compte
{

protected:
    int num_compte;
    Date creation_de_compte;
    double solde;
    string type_compte;
    vector <double> Tab_historique;

public:
    Compte();
    Compte(int num_compte, double solde, string type_compte, Date creation_de_compte= {1,1,2023});
    ~Compte();
    virtual void Afficher()=0;
    virtual void Saisir();
    virtual void Supp_compte();
    virtual void Afficher_Taux_interet();
    virtual void Afficher_solde();
    virtual void Afficher_date();
    virtual void Afficher_plafond();
    virtual void Ajout_Argent(double somme);
    virtual void Supprimer();
    virtual void Decouvert();
    virtual void Afficher_Dix_operations();
    virtual void Calcul_Agios();
    virtual void Afficher_echeance();


};

#endif