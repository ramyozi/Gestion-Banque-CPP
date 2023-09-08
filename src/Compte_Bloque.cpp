//============================================================================
// Name        : Compte_Bloque.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class fille de compte
//============================================================================

#include "Compte_Bloque.h"

Compte_Bloque::Compte_Bloque(int num_compte, double solde, string type_compte) : Compte(num_compte, solde, type_compte)
{
    this->type_compte="compte bloque";
    this->num_compte=num_compte;
    this->solde=solde;
    cout << "passage dans le constructeur par paramètres" << endl;
}

Compte_Bloque::~Compte_Bloque()
{

}
// void Compte_Bloque::Ajouter_argent()
// {

// }

void Compte_Bloque::Afficher_echeance()
{
    cout << "Vous avez acces a vos fonds 7 ans apres l'ouverture de votre compte. \n A partir du ";
    Date date_ouverture;
    date_ouverture=this->creation_de_compte.Ajout_Annee(7);
    date_ouverture.Afficher();

    // A retravailler si on a le temps
    // Décompte (date)
}

void Compte_Bloque::Afficher()
{
    cout<<"______________________________________"<<endl;
    cout<<"Le numero du compte : "<<num_compte<<endl;
    cout<<"Le solde  : "<<solde<<endl;
    cout<<"Le type du compte : "<<type_compte<<endl;
    cout<<"______________________________________"<<endl;
}
