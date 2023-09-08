//============================================================================
// Name        : Compte.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class mère des comptes spécifiques
//============================================================================

#include "Compte.h"

Compte::Compte()
{
    //cout << "creation d'un compte" << endl;
    //cout << "constructeur par default\n";
}
Compte::Compte(int num_compte, double solde, string type_compte, Date creation_de_compte)
{
    //cout << "creation du compte " << type_compte << " " << endl;
}

Compte::~Compte()
{

}

/*void Compte::Afficher()
{
    en commentaire car dans les classes filles (à cause du =0)
}*/

void Compte::Saisir()
{
    cout<<"saisissez le numero du compte : ";
    cin>> num_compte;
    cout<<"saisissez le solde : ";
    cin>> solde;    
    cout<<"saisissez le type du compte : \n";
    do{
        cout << "livret A ou courant ou bloque ou epargne logement : ";
        cin>> type_compte;
    }while ( type_compte!="livret A"&& type_compte!="compte courant"&& type_compte!="compte bloque"&& type_compte!="epargne logement");
    cout<<"saisissez la date de creation du compte : ";
    creation_de_compte.Saisir();
}

void Compte::Afficher_solde()
{
    cout<<"votre solde est de "<< solde << " euros"<<endl;
}

void Compte::Afficher_Taux_interet()
{
    cout << "Le taux d'intérêt du est de 2%" << endl;

}

void Compte::Supp_compte()
{
    // vectors
}

void Compte::Afficher_plafond()
{
    cout<< "passage dans afficher plafond"<<endl;
    if (this->type_compte=="livret A")
        {
            cout << "Le plafond de votre " << this->type_compte << " est fixe 22 950 euros" << endl;
        }
    else if (this->type_compte=="epargne logement")
        {
            cout << "Le plafond de votre " << this->type_compte << " est fixe 15 300 euros" << endl;
        }
        else if (this->type_compte=="compte courant" || this->type_compte=="compte bloque")
        {
            cout << "Votre compte n'a pas de plafond limite" << endl;
        }
        else
        {
            cout<<"erreur lors de l'affichage du plafond"<< endl;
        }
}

void Compte::Afficher_date() //de creation
{
    cout<< "La date de creation de compte : ";
    this->creation_de_compte.Afficher();
}

void Compte::Ajout_Argent(double somme)
{
    this->solde+=somme;
    Tab_historique.push_back(somme);
    cout<<"vous venez de faire un depot de "<<somme<<"€"<<endl;
}


    /*
   
    -------------------------
    -50
    +23
    +34
    -75
    ---------------------------
    solde actuel = 500€
    */
void Compte::Decouvert()
{

    cout << "Votre decouvert autorisé est de 1500 euros" << endl;
    cout<<"=========================================" << endl;
    cout << "Votre solde actuel est : " << this->solde << endl;
    cout<<"=========================================" << endl;

}

void Compte::Afficher_Dix_operations()
{
    int j=1;
    for (int i = Tab_historique.size()-10; i < Tab_historique.size();i++)
        {
            cout << "transaction " << j << " : " << this->Tab_historique[i] << endl;
            j+=1;
        }
    cout << "Votre Solde Actuel est : " << this->solde << endl;
}

void Compte::Calcul_Agios()
{
    double pourcentage = 7.5;
    double tmp;
    tmp = solde * (double) pourcentage / 100.0;
    cout << "Avec un taux d'agios de " << pourcentage << "%, vous allez etre prelevez un montant de " << tmp << " euros" << endl;
}

void Compte::Afficher_echeance()
{
    if (this->type_compte=="compte bloque"){
        cout << "Vous avez acces a vos fonds 7 ans apres l'ouverture de votre compte. \n A partir du ";
        Date date_ouverture;
        date_ouverture=this->creation_de_compte.Ajout_Annee(7);
        date_ouverture.Afficher();}
    if (this->type_compte=="epargne logement"){
        cout << "Vous avez acces a vos fonds 4 ans apres l'ouverture de votre compte. \n A partir du ";
        Date date_ouverture;
        date_ouverture=this->creation_de_compte.Ajout_Annee(4);
        date_ouverture.Afficher();}
    // A retravailler si on a le temps
    // Décompte (date)
}

void Compte::Supprimer()
{
    //
}