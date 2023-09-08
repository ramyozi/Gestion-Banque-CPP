//============================================================================
// Name        : Date.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : Class date utile un peu partout
//============================================================================

#include "Date.h"

Date::Date()
{
    jour=1;
    mois=1;
    annee=2023;
    //cout << "passage dans le constructeur" << endl;
}

Date::Date(const int &j, const int &m, const int &a)
{
    jour=j;
    mois=m;
    annee=a;
    //cout << "passage dans le constructeur avec parametre" << endl;
}

Date::Date(const Date &copie)
{
    jour=copie.jour;
    mois=copie.mois;
    annee=copie.annee;
    //cout << "passage dans date copie" << endl;
}
Date::~Date()
{
    //cout << "passage dans le destructeur" << endl;
}

void Date::Afficher()
{
    cout << setw(2) << setfill('0') << jour << "/" << setw(2) << setfill('0') << mois << "/" << annee << endl;
}

Date Date::Ajout_Annee(int an)
{
    Date A;
    A.annee=this->annee+an;
    return A;
}

void Date::Saisir()
{

        cout << "Saisir le jour: ";
        cin >> jour;
        cout << "Saisir le mois: ";
        cin >> mois;
        cout << "Saisir l'annee: ";
        cin >> annee;
}
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
ostream& operator<< (ostream& out, Date &D)
{
    out << setw(2) << setfill('0') << D.jour << "/" << setw(2) << setfill('0') << D.mois << "/" << D.annee << endl;
    return out;
}
