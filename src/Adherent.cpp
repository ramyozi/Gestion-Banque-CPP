//============================================================================
// Name        : Adherent.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : class fille de "Personne"
//============================================================================

#include "Adherent.h"

Adherent::Adherent(): Compte(num_compte, solde, type_compte, creation_de_compte= {1,1,2023})
, Personne( nom, prenom, date_de_naissance, adresse_postale, adresse_mail, numero_de_tel)
{
mot_de_passe="00000";
}

Adherent::Adherent(int num_compte, double solde, string type_compte,Date creation_de_compte, string nom,string prenom,Date date_de_naissance,string adresse_postale,string adresse_mail, string numero_de_tel)
{
    this->num_compte=num_compte;
    this->solde= solde;
    this->type_compte=type_compte;
    this->creation_de_compte=creation_de_compte;
    //================================
    this->nom=nom;
    this->prenom= prenom;
    this->date_de_naissance=date_de_naissance;
    this->adresse_postale=adresse_postale;
    this->adresse_mail=adresse_mail;
    this->numero_de_tel=numero_de_tel;
    
}
Adherent::~Adherent()
{

}

void Adherent::Saisir()
{
    cout << "saisissez le nom : "; getchar();
    getline(cin,nom);
    cout << "saisissez le prenom : ";
    getline(cin,prenom);
    cout << "saisissez la date de naissance : ";
    this->date_de_naissance.Saisir(); getchar();
    cout << "saisissez l'adresse postale : ";
    getline(cin,adresse_postale);
    cout << "saisissez l'adresse mail : ";
    getline(cin,adresse_mail);
    cout << "saisissez le numero de telephone : ";
    getline(cin,numero_de_tel);
    cout << "saisissez le type du compte : ";
    getline(cin,this->type_compte);
}

void Adherent::Afficher()
{
    cout<<"______________________________________"<<endl;
    cout << "Le titulaire du compte est " << prenom <<" "<< nom << endl;
    cout << "Date de naissance: \t";
    date_de_naissance.Afficher();
    cout << "Adresse postale: \t" << adresse_postale <<endl;
    cout << "Adresse mail:           "<< adresse_mail <<endl;
    cout << "Numero de telephone: \t" <<numero_de_tel <<endl;
    cout<<"Le type du compte: \t"<<type_compte<<endl;
    cout<<"Le numero du compte: \t"<<num_compte<<endl;
    cout<<"Le solde:               "<<solde<< " euros " << endl;
    cout<<"______________________________________"<<endl;
}

int Adherent::get_Num_Compte()
{
    int a=this->num_compte;
    cout<<"le numero du compte est " << a <<endl;
    return(a);
}

string Adherent::get_type_compte()
{
    return(this->type_compte);
}


ofstream &operator<<(ofstream &monfichier, const Adherent &A)
{ 
    cout<<"fichier ouvert\n";
    monfichier <<A.nom <<";"<<A.prenom<<";"  ; // nom prenom du client
    monfichier <<A.adresse_postale<<";"  ; // adresse du client
    monfichier <<A.adresse_mail<<";"  ;// adresse mail du client
    monfichier <<A.numero_de_tel <<";" ; // numero de telephone du client
    monfichier <<A.num_compte <<";" ; // numéro du compte du client
    monfichier <<A.type_compte <<";" ; // type du compte du client
    monfichier <<A.solde  <<";\n"; // solde du compte

    return monfichier;
}

string Adherent::get_adresse_postale_compte()
{
    return(this->adresse_postale);
}

string  maju(string &str) {
    if (str.length() == 0) {
        return str;
    }else
    {
        str[0] = toupper(str[0]);
        return str;
    }
    
}

string Adherent::get_Nom_et_prenom()
{
    string nom_prenom;
    nom_prenom = maju(this->prenom)+" "+maju(this->nom);
    return(nom_prenom);
}

/*
void Adherent::EcrireFprintf (const char *Filename)
{
FILE *monfichier;
monfichier = fopen (Filename, "w"); // w creation, ecriture.

if (monfichier==NULL)
{
perror("Impossible d'ouvrir le fichier");
exit(EXIT_FAILURE);
}else{
    
    monfichier << this->nom<< " ;" << this->prenom<< " ;"; // nom prenom du client
    monfichier << this->adresse_postale<< " ;"; // adresse du client
    monfichier << this->adresse_mail<< " ;";// adresse mail du client
    monfichier << this->numero_de_tel<< " ;"; // numero de telephone du client
    monfichier << this->num_compte<< " ;"; // numéro du compte du client
    monfichier << this->type_compte<< " ;"; // type du compte du client
    monfichier << this->solde<< " ;"; // solde du compte
}*/

/*
fprintf(ptr_fic,"\n");
fprintf(ptr_fic, " ; %s ; %s ; ", this->nom, this->prenom); // nom prenom du client
//fprintf(ptr_fic, this->date_de_naissance); // date de naissance
//ptr_fic << this->date_de_naissance.Afficher(); // date de naissance
//fprintf(ptr_fic, " ; %s ; ", this->date_de_naissance); // date de naissance du client
fprintf(ptr_fic, " ; %s ; ", this->adresse_postale); // adresse du client
fprintf(ptr_fic, " ; %s ; ", this->adresse_mail); // adresse mail du client
fprintf(ptr_fic, " ; %s ; ", this->numero_de_tel); // numero de telephone du client
fprintf(ptr_fic, " ; %d ; ", this->num_compte); // numéro du compte du client
fprintf(ptr_fic, " ; %s ; ", this->type_compte); // type du compte du client
fprintf(ptr_fic, " ; %ls ; ", this->solde); // solde du compte
//*ptr_fic<< this->creation_de_compte;
fprintf(ptr_fic, " ; %d ; %d ; %d ; ", this->creation_de_compte.jour, this->creation_de_compte.mois, this->creation_de_compte.annee); // date de creation de compte

fclose(ptr_fic);
}*/