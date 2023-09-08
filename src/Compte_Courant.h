/*
 * Compte_Courant.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef COMPTE_COURANT_H
#define COMPTE_COURANT_H

#pragma once
#include "Compte.h"

class Compte_Courant : virtual public Compte //utilisation de virtual pour faire de l'héritage multiple avec cette classe
{
public:
    Compte_Courant(int num_compte, double solde, string type_compte="compte courant");
    ~Compte_Courant();
    void Afficher_Dix_operations();
    void Decouvert();
    virtual void Calcul_Agios(int pourcentage);
    void Afficher();
    virtual void Retirer_Argent(double retrait);
};

#endif