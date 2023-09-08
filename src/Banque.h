/*
 * Banque.h
 *
 *  Created on: 30 janv. 2023
 *     
 */



#ifndef BANQUE_H
#define BANQUE_H

#include "Adherent.h"

#pragma once

    
class Banque
{
public:
    Banque();
    Banque(string nom,string Adresse);
    Banque(string nom,string Adresse,vector <Adherent> Tab);
    ~Banque();
    virtual void Afficher();
    virtual void Saisir();
    virtual void Modifier_adresse_banque();  

    /*
    fonction vecteur
    */
    virtual void AfficherA(vector <Adherent> Tab);
    virtual void SaisirA(vector <Adherent> Tab);

    virtual void Afficher_banque_liste_adh_fichier();
    void chercher_Adh();

    void Ajouter(); /* fonction ajouter nous permet d'ajouter un nouvel adh à la fin de la liste */
    //void Supp(Adherent Un_Adh)

    static int nombre_adh;
<<<<<<< HEAD
    void Modifier_Adresse_Adh();
    void Ajouter(Adherent A);
=======
    virtual void Modifier_Adresse_Adh();
    void Ajouter(const Adherent &A);
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
    bool verifier_mdp(int a);


private:
    string _nom;
    string _adresse;
    vector<Adherent>Tab;
    int code_secret=12345;
    
};

#endif