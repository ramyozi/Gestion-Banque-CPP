//============================================================================
// Name        : Compte_livre_A.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class fille de compte
//============================================================================

#include "Compte_livre_A.h"
/*Compte_livre_A::Compte_livre_A() : Compte()
{

}*/

Compte_livre_A::Compte_livre_A(int num_compte, double solde, string type_compte) : Compte(num_compte, solde, type_compte)
{
    this->type_compte="livret A";
    this->num_compte=num_compte;
    this->solde=solde;
    cout << "passage dans le constructeur par paramètres" << endl;
}

Compte_livre_A::~Compte_livre_A()
{
    cout << "passage dans le destructeur" << endl;

}

// void Compte_livre_A::Ajouter_argent()
// {


// }

void Compte_livre_A::Decouvert()
{
    cout << "Vous n'avez pas de decouvert autorise" << endl;
    cout<<"=========================================" << endl;
    cout << "Votre solde actuel est : " << this->solde << endl;
    cout<<"=========================================" << endl;
}

void Compte_livre_A::Retirer_Argent(double retrait)
{
    cout << "Votre solde avant l'operation est de" << this->solde << " euros\n";
    if (solde-retrait<0) 
    {
        cout<< "Rretrait Impossible !! \n";
    }else{
        this->solde-=retrait;
        this->Tab_historique.push_back(retrait*(-1));
        cout<<"vous venez de faire un retrait de "<<retrait<<"euros"<<endl;
        cout << "Votre solde actuelle est de" << this->solde << " euros\n";
    }
}
/*
void Compte_livre_A::Afficher_Taux_interet()
{
    cout << "Le taux d'intérêt du " << this->type_compte << " est de 2%" << endl;

}*/

void Compte_livre_A::Saisir()
{
    /*cout<<"saisissez le numero du compte : ";
    cin>> num_compte;
    cout<<"saisissez le solde : ";
    cin>> solde;    
    cout<<"saisissez le type du compte : \n";
    do{
        cout << "livre A ou courant ou bloque ou epargne logement : ";
        cin>> type_compte;
    }while ( type_compte!="livre A"&& type_compte!="compte courant"&& type_compte!="compte bloque"&& type_compte!="epargne logement");
    cout<<"saisissez la date de creation du compte : ";
    creation_de_compte.Saisir();*/


}


void Compte_livre_A::Afficher()
{
    cout<<"______________________________________"<<endl;
    cout<<"Le numero du compte : "<<num_compte<<endl;
    cout<<"Le solde  : "<<solde<<endl;
    cout<<"Le type du compte : "<<type_compte<<endl;
    cout<<"______________________________________"<<endl;
}