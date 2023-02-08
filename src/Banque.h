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
    // constructeur par defaut
    Banque();  
    // constructeur par parametres
    Banque(string nom,string Adresse);
    // constructeur par parametres 2
    Banque(string nom,string Adresse,vector <Adherent> Tab); 
    // destructeur
    ~Banque(); 
    // gère l'affichage de la banque
    virtual void Afficher(); 
    // gère la saisie des informations de la banque
    virtual void Saisir(); 
    // gère la possibilité de changer l'adresse du siege social de la banque
    virtual void Modifier_adresse_banque(); 

    
    //fonctions vecteur:

    // affichage du tableau d'adherents
    virtual void AfficherA(); 
    // saisie du tableau d'adherents
    virtual void SaisirA(); 

    // affichage de la liste d'adherents dans un fichier
    virtual void Afficher_banque_liste_adh_fichier();  
    // permet de rechercher un adherent dans la liste
    void chercher_Adh(); 
    // fonction ajouter nous permet d'ajouter un nouvel adherent à la fin de la liste
    void Ajouter(); 

    static int nombre_adh;
    // permet de modifier l'adresse d'un adherent si il déménage
    virtual void Modifier_Adresse_Adh();
    // permet d'ajouter un adherent préalablement remplis
    void Ajouter(Adherent &A);
    // permet de vérifier si le mot de passe est correct
    bool verifier_mdp(int a);
    void Ajout_Argent(int adh_rechrche_num_compte,double montent);
    void retrait_Argent(int adh_rechrche_num_compte,double montent);


private:
    string _nom;
    string _adresse;
    vector<Adherent>Tab;
    // le mot de passe
    int code_secret=12345;
    
};

#endif