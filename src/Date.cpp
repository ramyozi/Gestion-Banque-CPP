//============================================================================
// Name        : Date.cpp
// Author      : Groupe au complet
// Version     : Version finale
// Copyright   : Your copyright notice
// Description : Class date utile un peu partout
//============================================================================

#include "Date.h"

//Constructeur par défaut
Date::Date()
{
    //initiation du jour, mois et de l'annee
    jour=1;
    mois=1;
    annee=2023;
    //cout << "passage dans le constructeur" << endl;
}
//Constructeur par defaut
Date::Date(const int &j, const int &m, const int &a)
{
    jour=j;
    mois=m;
    annee=a;
    //cout << "passage dans le constructeur avec parametre" << endl;
}
//Constructeur par copie
Date::Date(const Date &copie)
{
    jour=copie.jour;
    mois=copie.mois;
    annee=copie.annee;
    //cout << "passage dans date copie" << endl;
}
//Destructeur
Date::~Date() 
{
    //cout << "passage dans le destructeur" << endl;
}
//Fonction d'affichage de la date
void Date::Afficher()
{
    cout << setw(2) << setfill('0') << jour << "/" << setw(2) << setfill('0') << mois << "/" << annee << endl;
}
//Fonction pour Ajouter des annee a la date
Date Date::Ajout_Annee(int an)
{
    Date A;
    A.annee=this->annee+an;
    return A;
}
//Fonction de saisie de la date
void Date::Saisir()
{

        cout << "Saisir le jour: ";
        cin >> jour;
        cout << "Saisir le mois: ";
        cin >> mois;
        cout << "Saisir l'annee: ";
        cin >> annee;
}
//surchage de l'opperateur de saisie 
istream& operator>> (istream& in, Date &D)
{
    cout << "Saisir le jour: ";
    in >> D.jour;
    cout << "Saisir le mois: ";
    in >> D.mois;
    cout << "Saisir l'annee: ";
    in >> D.annee; 
    return in;
}
// surchage de l'opperateur d'affichage
ostream& operator<< (ostream& out, Date &D)
{
    out << setw(2) << setfill('0') << D.jour << "/" << setw(2) << setfill('0') << D.mois << "/" << D.annee << endl;
    return out;
}

