//============================================================================
// Name        : Compte_Courant.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class fille de compte
//============================================================================

#include "Compte_Courant.h"

Compte_Courant::Compte_Courant(int num_compte, double solde, string type_compte) : Compte(num_compte, solde, type_compte)
{
    this->type_compte="compte courant";
    this->num_compte=num_compte;
    this->solde=solde;
    cout << "passage dans le constructeur par paramètres" << endl;
}

Compte_Courant::~Compte_Courant()
{

}

//ceci est un commentaire
void Compte_Courant::Retirer_Argent(double retrait)
{
    cout << "Votre solde avant l'operation est de" << this->solde << " euros\n";
    if (solde-retrait<-1500) 
    {
        cout<< "Pas assez d'argent dans le compte\n";
    }else{
        this->solde-=retrait;
        this->Tab_historique.push_back(retrait*(-1));
        cout<<"vous venez de faire un retrait de "<<retrait<<"euros"<<endl;
        cout<<"=========================================" << endl;
        cout << "Votre solde actuel est de" << this->solde << " euros\n";
        cout<<"=========================================" << endl;
    }
}
void Compte_Courant::Calcul_Agios(int pourcentage)
{
    double tmp;
    tmp = solde * (double) pourcentage / 100.0;
    cout << "Avec un taux d'agios de " << pourcentage << "%, vous allez etre prelevez un montant de " << tmp << " euros" << endl;
}


void Compte_Courant::Decouvert()
{

    cout << "Votre decouvert autorisé est de 1500 euros" << endl;
    cout<<"=========================================" << endl;
    cout << "Votre solde actuel est : " << this->solde << endl;
    cout<<"=========================================" << endl;

}

// void Compte_Courant::Ajouter_argent()
// {

// }

void Compte_Courant::Afficher_Dix_operations()
{
    int j=1;
    for (int i = Tab_historique.size()-10; i < Tab_historique.size();i++)
        {
            cout << "transaction " << j << " : " << this->Tab_historique[i] << endl;
            j+=1;
        }
    cout << "Votre Solde Actuel est : " << this->solde << endl;
}



void Compte_Courant::Afficher()
{
    cout<<"______________________________________"<<endl;
    cout<<"Le numero du compte : "<<num_compte<<endl;
    cout<<"Le solde  : "<<solde<<endl;
    cout<<"Le type du compte : "<<type_compte<<endl;
    cout<<"______________________________________"<<endl;
}
