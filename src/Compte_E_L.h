/*
 * Compte_E_L.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef COMPTE_E_L_H
#define COMPTE_E_L_H

#pragma once
#include "Compte.h"

//Definition d'une classe fille "Compte epargne logement" qui hérite de la classe "Compte"
class Compte_E_L : virtual public Compte //utilisation de virtual pour faire de l'héritage multiple avec cette classe
{
//Définition des fonctions membres
public:
//Constructeur par paramètres
    Compte_E_L(int num_compte, double solde, string type_compte="epargne logement");
//Destructeur
    ~Compte_E_L();
    //virtual void Ajouter_Argent();
    //virtual void Afficher_Taux_interet();
    //virtual void Afficher_Plafond();
    virtual void Afficher_echeance();
    virtual void Afficher_Date_avant_cloture();
    void Afficher();

};

#endif