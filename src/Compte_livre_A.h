/*
 * Compte_livre_A.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef COMPTE_LIVRE_A_H
#define COMPTE_LIVRE_A_H

#pragma once
#include "Compte.h"

//Definition d'une classe fille "Compte livret A" qui hérite de la classe "Compte"
class Compte_livre_A : virtual public Compte //utilisation de virtual pour faire de l'héritage multiple avec cette classe
{
//Définition des fonctions membres
public:
//Constructeur par paramètres
    Compte_livre_A(int num_compte, double solde, string type_compte="livret A");
//Destructeur
    ~Compte_livre_A();
    // void Ajouter_argent();
    void Retirer_Argent(double retrait);
    void Decouvert();
    //void Afficher_Taux_interet();
    //void Afficher_plafond();
    void Afficher();
    //void Saisir();

};

#endif