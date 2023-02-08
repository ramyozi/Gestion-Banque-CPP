/*
 * Compte_Bloque.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef COMPTE_BLOQUE_H
#define COMPTE_BLOQUE_H

#pragma once
#include "Compte.h"

//Definition d'une classe fille "Compte bloque" qui hérite de la classe "Compte"
class Compte_Bloque : virtual public Compte //utilisation de virtual pour faire de l'héritage multiple avec cette classe
{
//Définition des fonctions membres
public:
//Constructeur par paramètres
    Compte_Bloque(int num_compte, double solde, string type_compte="compte bloqué");
//Constructeur par défaut
    ~Compte_Bloque();
    // void Ajouter_argent();
    virtual void Afficher_echeance();
    void Afficher();
    
};

#endif