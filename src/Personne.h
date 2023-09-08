/*
 * Personne.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef PERSONNE_H
#define PERSONNE_H

#pragma once
#include "Date.h"


class Personne
{
public:
    Personne();
    Personne(string nom,
    string prenom,
    Date date_de_naissance,
    string adresse_postale,
    string adresse_mail,
    string numero_de_tel);
    ~Personne();
    virtual void Saisir()=0;
    virtual void Afficher()=0;
    friend istream& operator>> (istream& in, Personne &D);
    friend ostream& operator<< (ostream& out, Personne &D);

protected:
    string nom;  
    string prenom;
    Date date_de_naissance;
    string adresse_postale;
    string adresse_mail;
    string numero_de_tel;
    
    

};

#endif