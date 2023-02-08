/*
 * Adherent.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef ADHERENT_H
#define ADHERENT_H

#pragma once
#include "Personne.h"
#include "Compte.h"

//Definition d'une classe fille "Adherent" qui hérite de la classe "Compte" et de la classe "Personne"
class Adherent :  public Personne, virtual public Compte
{
//Définition des fonctions membres
public:
//Constructeur par défaut
    Adherent();
//Constructeur par paramètres
    Adherent(int num_compte, double solde, string type_compte,Date creation_de_compte, string nom,string prenom,Date date_de_naissance,string adresse_postale,string adresse_mail, string numero_de_tel);
//Destructeur
    ~Adherent();
    virtual void Saisir();
    virtual void Afficher();
    int get_Num_Compte();
    string get_type_compte();
    //void EcrireFprintf (const char *Filename);
    friend ofstream &operator<<(ofstream &monfichier, const Adherent &A);
    string get_adresse_postale_compte();
    string get_Nom_et_prenom();
    virtual void Modifier_Adresse_Adh();
    void modifier_Solde(double somme);
protected:

//Définition des attributs uniquement accessible dans la classe mère
private:
    string mot_de_passe;    

};

string  maju(string &str); //Convertir la première lettre d'une string en majuscule

#endif