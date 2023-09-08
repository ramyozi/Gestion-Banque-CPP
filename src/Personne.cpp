//============================================================================
// Name        : Personne.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class mère de Adherent
//============================================================================

#include "Personne.h"

Personne::Personne()
{
        this->nom="nom inconnu";
        this->prenom="prenom inconnu";
        Date a(1,1,2023);
        this->date_de_naissance=a;
        this->adresse_postale="adresse_postale inconnue";
        this->adresse_mail="adresse_mail inconnu";
        this->numero_de_tel=numero_de_tel;
}
Personne::Personne(string nom,string prenom,Date date_de_naissance,string adresse_postale,string adresse_mail,string numero_de_tel)
    {
        this->nom=nom;
        this->prenom=prenom;
        this->date_de_naissance=date_de_naissance;
        this->adresse_postale=adresse_postale;
        this->adresse_mail=adresse_mail;
        this->numero_de_tel=numero_de_tel;
    }


Personne::~Personne()
{

}

/*void Personne::Saisir()
{
    cout<<"saisissez le nom : ";
    getline(cin,nom);
    cout<<"saisissez le prenom : ";
    getline(cin,prenom);
    cout<<"saisissez la date de naissance : ";
    this->date_de_naissance.Saisir();
    cout<<"saisissez l'adresse postale : ";
    getline(cin,adresse_postale);
    cout<<"saisissez l'adresse mail : ";
    getline(cin,adresse_mail);
    cout<<"saisissez le numero de téléphone : ";
    getline(cin,numero_de_tel);
}*/

istream& operator>> (istream& in, Personne &D)
{
    cout<<"saisissez le nom : ";
    getline(in,D.nom);
    cout<<"saisissez le prenom : ";
    getline(in,D.prenom);
    cout<<"saisissez la date de naissance : ";
    D.date_de_naissance.Saisir();
    cout<<"saisissez l'adresse postale : ";
    getline(in,D.adresse_postale);
    cout<<"saisissez l'adresse mail : ";
    getline(in,D.adresse_mail);
    cout<<"saisissez le numero de téléphone : ";
    getline(in,D.numero_de_tel);

    return in;
}

/*void Personne::Afficher()
{
    cout << "Le titulaire du compte est monsieur/madamme " << prenom<<" "<< nom <<endl;
    cout << "Date de naissance : ";
    date_de_naissance.Afficher();
    cout<<endl;
    cout << "Adresse postale : \t" << adresse_postale <<endl;
    cout << "Adresse mail : \t" << adresse_mail <<endl;
    cout << "Numero de telephone : \t" <<numero_de_tel <<endl;
}*/

ostream& operator<< (ostream& out, Personne &D)
{
    out << "Le titulaire du compte est monsieur/madamme \t" << D.prenom<<" "<< D.nom <<endl;
    out << "Date de naissance : ";
    out << D.date_de_naissance;
    out<<endl;
    out << "Adresse postale : \t" << D.adresse_postale <<endl;
    out << "Adresse mail : \t" << D.adresse_mail <<endl;
    out << "Numero de telephone : \t" << D.numero_de_tel <<endl;

    return out;
} 
