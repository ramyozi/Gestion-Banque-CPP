//============================================================================
// Name        : Banque.cpp
// Author      : 
// Version     : deuxième jour
// Copyright   : Your copyright notice
// Description : 
//============================================================================

#include "Banque.h"

int Banque::nombre_adh = 0;


void Banque::SaisirA(vector <Adherent> Tab)
{
    for (int i = 0 ; i < Tab.size() ; i++)
    {
        cout<< "================================= "  << endl;
        cout<< "Saisie de l'adherent numero "<< i+1 << endl;
        cout<< "================================= "  << endl;
        Tab[i].Saisir();
        cout<< "L'adherent numero "<< i+1 <<"a bien été saisi. Au suivant !!"<< endl;
        cout<< "================================= "  << endl;
    }
}


Banque::Banque()
{
    _nom = "Banque inconnue";
    _adresse = "Adresse inconnue";
    //Saisir(Tab);
}

Banque::Banque(string nom,string Adresse)
{
    this->_nom=nom;
    this->_adresse=Adresse;
}

Banque::Banque(string nom,string Adresse,vector <Adherent> Tab)
{
    this->_nom=nom;
    this->_adresse=Adresse;
    this->Tab=Tab;
}

Banque::~Banque()
{
    cout<<"passage dans le destructeur"<<endl;
}
void Banque::AfficherA(vector <Adherent> Tab) //----------------------------
{
    for (int i=0; i<Tab.size();i++)
    {
        Tab[i].Afficher();
        
    }

}

void Banque::Afficher()
{
    /*cout << "~~~~~~~~~~" <<endl;
    cout << "~~~ Ma Banque ~~~"<<endl;   un petit logo ici a mettre
    cout << "【Ma】banque】"<<endl;
    cout << "~~~~~~~~~~" <<endl;
    */
   cout <<"-------------------------------"<<endl;
    cout << "Bienvenue a "<< _nom << endl;
    cout <<"-------------------------------"<<endl;
    cout << _adresse << endl;
    AfficherA(Tab);
}

void Banque::Saisir()
{
    cout << "saisir le nom de la banque : ";
    getline(cin,this->_nom);
    cout << "saisir le siège social de la banque : ";
    getline(cin,this->_adresse);
}

void Banque::Modifier_adresse_banque()
{
    cout<< "saisir la nouvelle adresse : ";
    getline(cin,this->_adresse);
}


void Banque::Ajouter()
{
    this->Tab[Tab.size()].Saisir(); 
}

void Banque::chercher_Adh()
{
    bool rester;
    int adh_rechrche_num_compte,tmp_verfication,j_verification;
    cout << "saisir le numero de compte de cet adherent recherche: ";
    do{
    tmp_verfication=0;
    j_verification=0;
    cin >> adh_rechrche_num_compte;
    for (int i=0;i<this->Tab.size();i++)
    {
        if(this->Tab[i].get_Num_Compte()==adh_rechrche_num_compte)
        {
            string type = this->Tab[i].get_type_compte();
            if(type=="livret A")
                {
                    cout<< "(Le compte que vous tenter d'y acceder est un "<< type <<")"<<endl;
                    int choixlivreA;
                    cout << "1- La date d'ouverture\n"
                        "2- Taux d interet\n"
                        "3- Plafond\n"
                        "4- Solde\n"
                        "5- toutes ses informations \n"
                        "0- Retour au menu precedent\n"
                        "Choix : ";
                    do{
                    cin >> choixlivreA;
                    switch (choixlivreA) {
                        case 1:
                            this->Tab[i].Afficher_date();
                            break;break;
                        case 2:
                            this->Tab[i].Afficher_Taux_interet();
                            break;break;
                        case 3:
                            this->Tab[i].Afficher_plafond();
                            break;break;
                        case 4:
                            this->Tab[i].Afficher_solde();
                            break;break;
                        case 5:
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_date();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_Taux_interet();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_plafond();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_solde();
                            cout<<"--------------------------------------\n";
                            break;break;
                        case 0:
                            rester=false;
                        break;
                        default:{
                        cout << "Option non valide." << endl;
                        j_verification=1;
                        
                        }
                    }
                    if (choixlivreA == 0) {
                        break;break;
                    }
                    
                    if (j_verification==1 && choixlivreA != 0)
                    {      
                        cout<<" \nVeuiller resaisir un chiffre parmi les choix proposes svp: ";
                    }
                    }while(j_verification==1 && choixlivreA != 0);break;
        }
        

                
            if(type=="compte courant")
                {
                    cout<< "(Le compte que vous tenter d'y acceder est un "<< type <<")"<<endl;
                    int choixCourant;
                    cout << "1- La date d'ouverture\n"
                        "2- Le montent du decouvert autorise\n"
                        "3- Solde\n"
                        "4- Solde\n"
                        "5- toutes ses informations \n"
                        "0- Retour au menu precedent\n"
                        "Choix : ";
                    do{
                    cin >> choixCourant;
                    switch (choixCourant) {
                        case 1:
                            this->Tab[i].Afficher_date();
                            break;break;
                        case 2:
                            this->Tab[i].Afficher_Taux_interet();
                            break;break;
                        case 3:
                            this->Tab[i].Afficher_solde();
                            break;break;
                        case 4:
                            this->Tab[i].Afficher_Dix_operations();
                            break;break;
                        case 5:
                            this->Tab[i].Calcul_Agios();
                            break;break;
                        case 6:
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_date();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Decouvert();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_solde();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_Dix_operations();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Calcul_Agios();
                            cout<<"--------------------------------------\n";
                            break;break;
                        case 0:
                            rester=false;
                        break;
                        default:{
                            cout << "Option non valide." << endl;
                            j_verification=1;
                        }
                    }
                    if (choixCourant == 0) {
                        break;break;
                    }
                    if (j_verification==1 && choixCourant != 0)
                    {      
                        cout<<" \nVeuiller resaisir un chiffre parmi les choix proposes svp: ";
                    }
                    }while(j_verification==1 && choixCourant != 0);break;
                    }
            if(type=="compte bloque")
                {
                    cout<< "(Le compte que vous tenter d'y acceder est un "<< type <<")"<<endl;
                    int choixBloque;
                    cout << "1- La date d'ouverture\n"
                        "2- Taux d interet\n"
                        "3- Solde\n"
                        "4- échéance avant cloture du compte\n"
                        "5- toutes ses informations \n"
                        "0- Retour au menu precedent\n"
                        "Choix : ";
                    do{
                    cin >> choixBloque;
                    switch (choixBloque) {
                        case 1:
                            this->Tab[i].Afficher_date();
                            break;break;
                        case 2:
                            this->Tab[i].Afficher_Taux_interet();
                            break;break;
                        case 3:
                            this->Tab[i].Afficher_solde();
                            break;break;
                        case 4:
                            this->Tab[i].Afficher_echeance();
                            break;break;
                        case 5:
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_date();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_Taux_interet();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_solde();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_echeance();
                            cout<<"--------------------------------------\n";
                            break;break;
                        case 0:
                            rester=false;
                        break;
                        default:{
                            cout << "Option non valide." << endl;
                            j_verification=1;
                        }
                    }
                    if (choixBloque == 0) {

                        break;break;
                    }
                        if (j_verification==1 && choixBloque != 0)
                    {      
                        cout<<" \nVeuiller resaisir un chiffre parmi les choix proposes svp: ";
                    }
                    }while(j_verification==1 && choixBloque != 0);break;
                    }
                
            if(type=="epargne logement")
                {
                    cout<< "(Le compte que vous tenter d'y acceder est un compte "<< type <<")"<<endl;
                    int choix_E_L;
                    cout << "1- La date d'ouverture\n"
                        "2- Taux d interet\n"
                        "3- Plafond\n"
                        "4- Solde\n"
                        "5- echeance avant accessibilité aux fonds\n"
                        "6-  echeance avant clôture du compte\n"
                        "7- toutes ses informations\n"
                        "0- Retour au menu precedent\n"
                        "Choix : ";
                do{
                    cin >> choix_E_L;
                    switch (choix_E_L) {
                        case 1:
                            this->Tab[i].Afficher_date();
                            break;break;
                        case 2:
                            this->Tab[i].Afficher_Taux_interet();
                            break;break;
                        case 3:
                            this->Tab[i].Afficher_plafond();
                            
                            break;break;
                        case 4:
                            this->Tab[i].Afficher_solde();
                            break;break;
                        case 5:
                            this->Tab[i].Afficher_echeance();
                            break;break;
                        case 6:
                            this->Tab[i].Afficher_echeance();
                            break;break;
                        case 7:
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_date();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_Taux_interet();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_plafond();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_solde();
                            cout<<"--------------------------------------\n";
                            this->Tab[i].Afficher_echeance();
                            cout<<"--------------------------------------\n";
                            break;break;
                        case 0:
                            rester=false;
                        break;
                        default:{
                            cout << "Option non valide." << endl;
                            j_verification=1;
                            break;
                            }
                    }
                    if (choix_E_L == 0) {
                        break;break;
                    }
                    
                    break;
                if (j_verification==1 && choix_E_L != 0)
                {      
                    cout<<" \nVeuiller resaisir un chiffre parmi les choix proposes svp: ";
                }
//----------------------------------------------------                
                }while(j_verification==1 && choix_E_L != 0);break;
                }
            
        }else{
            tmp_verfication=1;
            }
        }
        if (tmp_verfication==1  && rester==true)
        {      
            cout<<"Ce numero de compte n'existe pas dans notre Banque \nVeuiller resaisir un autre ";
        }
    }while(tmp_verfication==1 && rester==true);
}



void Banque::Afficher_banque_liste_adh_fichier()
{
    ofstream monfichier;
    monfichier.open("Liste_Adherents.xls",fstream::in | fstream::out |fstream::out);
    monfichier<<"Banque : ;"<<this->_nom<<endl;
    monfichier<<"Adresse : ;"<<this->_adresse<<endl<<endl;

    for (int i=0;i<this->Tab.size();i++)
    {

        ofstream monfichier;
        monfichier.open("Liste_Adherents.xls",fstream::in | fstream::out |fstream::app);
        monfichier<<Tab[i];
    }
}

void Banque::Modifier_Adresse_Adh()
{
    
    int adh_rechrche_num_compte,tmp_verfication,numero_compte_local,a_recup=-1;
    cout << "saisir le numero du compte: ";
    do{
    
    cin >> adh_rechrche_num_compte;
    for (int i=0;i<this->Tab.size();i++)
    {
        tmp_verfication=0;
        numero_compte_local=this->Tab[i].get_Num_Compte();
        if(adh_rechrche_num_compte==numero_compte_local)
        {
            a_recup=i;
            cout<<"Ce compte °"<<adh_rechrche_num_compte<<" appartient a l adherent "<<this->Tab[a_recup].get_Nom_et_prenom()<<endl;
            cout<< "saisir la nouvelle adresse de cet adherent mr/mme "<< this->Tab[a_recup].get_Nom_et_prenom()<<" : ";
            getchar();getline(cin,this->_adresse);
            tmp_verfication=1;
            break;break;
        }else{
                tmp_verfication=0;
            }
        }
        if (tmp_verfication=1)
        {
            cout<<"Ce numero de compte n'existe pas \nVeuiller resaisir un autre ";
        }
    }while(tmp_verfication==0);
}

void Banque::Ajouter(const Adherent &A)
{
    this->Tab.push_back(A);
<<<<<<< HEAD
=======
    cout << "Vous venez d'ajouter un nouvel adhérent" << endl;
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
}


bool Banque::verifier_mdp(int a)
{
    bool res;
    a==this->code_secret?res=true:res=false;
    return res;
} 
