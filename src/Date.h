/*
 * Date.h
 *
 *  Created on: 30 janv. 2023
 *     
 */

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;


class Date
{
    private:
        int jour;
        int mois; 
        int annee;
    public:
        //constructeur
        Date();
        //constructeur avec parametres
        Date(const int &j, const int &m, const int &a);
        //constructeur par copie
        Date(const Date &copie);
        //destructeur
        ~Date();
        //fonction d'affichage de date
        void Afficher();
        //fonction de saisie de date
        void Saisir();
            //fonction amie de saisie
        Date Ajout_Annee(int an);
        friend istream& operator>> (istream& in, Date &D);
        //fonction amie d'affichage
        friend ostream& operator<< (ostream& out, Date &D);
};

#endif
