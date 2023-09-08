//============================================================================
// Name        : Compte_E_L.cpp (compte épargne et logement)
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class fille de compte
//============================================================================

#include "Compte_E_L.h"

Compte_E_L::Compte_E_L(int num_compte, double solde, string type_compte) : Compte(num_compte, solde, type_compte)
{
    this->type_compte="epargne logement";
    this->num_compte=num_compte;
    this->solde=solde;
    cout << "passage dans le constructeur par paramètres" << endl;
}

Compte_E_L::~Compte_E_L()
{

}


// void Compte_E_L::Ajouter_Argent()
// {



// }
/*
void Compte_E_L::Afficher_Taux_interet()
{



}
*/
/*void Compte_E_L::Afficher_Plafond()
{



}*/

void Compte_E_L::Afficher_Date_avant_cloture()
{
    cout << "Votre compte se cloture dans 7 ans. \n A savoir le ";
    Date date_cloture;
    date_cloture=this->creation_de_compte.Ajout_Annee(7);
    date_cloture.Afficher();
    // Décompte (date)
}

void Compte_E_L::Afficher_echeance()
{
    cout << "Vous avez acces a vos fonds 4 ans apres l'ouverture de votre compte. \n A partir du ";
    Date date_ouverture;
    date_ouverture=this->creation_de_compte.Ajout_Annee(4);
    date_ouverture.Afficher();
    
    // A retravailler si on a le temps
    // Décompte (date)
}

void Compte_E_L::Afficher()
{
    cout<<"______________________________________"<<endl;
    cout<<"Le numero du compte : "<<num_compte<<endl;
    cout<<"Le solde  : "<<solde<<endl;
    cout<<"Le type du compte : "<<type_compte<<endl;
    cout<<"______________________________________"<<endl;
}
