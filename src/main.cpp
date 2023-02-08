
/*
 * main.cpp
 *
*/

/*

make clean
make
./MaBanque

make clean
make
.\MaBanque

*/

#include "Adherent.h"
#include "Banque.h"
#include "Personne.h"
#include "Adherent.h"
#include "Compte.h"
#include "Compte_E_L.h"
#include "Compte_livre_A.h"
#include "Compte_Bloque.h"
#include "Compte_Courant.h"
#include "Date.h"

void Clear()
{
#if defined _WIN32 
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");

#endif

cout <<"\n\n=====================================" <<endl;
cout <<"   LDNR : La Devise Nous Rapporte"<<endl;
cout <<"=====================================" <<endl;
cout<<" ##      ####     ###    ##  ###### "<<endl;
cout<<" ##      ##  ##   ####   ##  ##   ##"<<endl;
cout<<" ##      ##   ##  ##  #  ##  #####  "<<endl;
cout<<" ##      ##  ##   ##   ####  ##  ## "<<endl;
cout<<" ######  ####     ##    ###  ##   ##"<<endl;
cout <<"=====================================" <<endl;
}

void ok()
{
  string c;int i=0;
  cout<< "continuer (o/n) : ";
 
  do{
    cin >> c;
    if (i!=0 && c!="n" && c!="o" && c!="N" && c!="O"){
      cout<<"oui ou non (o/n) : ";
    }
    if(i<3 && (c=="n" || c=="N")){
      cout<<"Etes vous sur? ";
    }
    if(i>3 && i<=4 && (c=="n" || c=="N")){
      cout<<"Aller la!!!! faites continuer (o/O) ";
    }
    if(i>=5 && (c=="n" || c=="N")){
      cout<<"bon vasi j vous fait passer par force, tant pis (o/O) ";
      c="o";
    }


    i++;
  }while( c!="o" && c!="O");


}



int main()
{

Adherent a(111, 21212.2, "compte courant",{1,1,2023}, "Jean", "DUPONT", {1,1,2000}, "19 rue XXXX 31000","toto31@gmail.com", "(+33)775754875");
Adherent b(222, 12.2, "livret A",{1,1,2023}, "Martin", "ALBIN", {1,1,2010}, "68 rue XXXX 31000","toto34@gmail.com", "(+33)754849900");
Adherent c(333, 3222.2, "compte bloque",{1,1,2023}, "Laura", "LAPIE", {1,1,1989}, "26 rue XXXX 31000","toto24@gmail.com", "(+33)756452222");
Adherent d(444, 100002.2, "epargne logement",{1,1,2023}, "Jérôme", "MICHEL", {1,1,1965}, "20 rue XXXX 31000","toto45@gmail.com", "(+33)711111875");
Adherent e(555, 21212.2, "compte courant",{1,1,2023}, "Morgane", "BOBON", {1,1,2000}, "19 rue XXXX 31000","toto31@gmail.com", "(+33)775754875");
Adherent f(666, 12.2, "livret A",{1,1,2023}, "Paul", "MANGIN", {1,1,2010}, "68 rue XXXX 31000","toto34@gmail.com", "(+33)754849999");
Adherent g(777, 3222.2, "compte bloque",{1,1,2023}, "Martha", "CHAPON", {1,1,1989}, "26 rue XXXX 31000","toto24@gmail.com", "(+33)756452222");
Adherent h(888, 100002.2, "epargne logement",{1,1,2023}, "Laurent", "PARIS", {1,1,1965}, "20 rue XXXX 31000","toto45@gmail.com", "(+33)711111875");

Adherent nv(555, 0.2, "epargne logement",{1,1,2023}, "Harry", "POTTER", {1,1,2002}, "barbes","marabou@gmail.com", "(+33)111111111");

e.Ajout_Argent(345);
e.retrait_Argent(34);
e.Ajout_Argent(1211);
e.Ajout_Argent(89);
e.retrait_Argent(56);
e.Ajout_Argent(3452);
e.retrait_Argent(83);
e.Ajout_Argent(112);
e.Ajout_Argent(23);
e.Ajout_Argent(89);
e.retrait_Argent(56);
e.Ajout_Argent(1456);

vector <Adherent> Liste{a,b,c,d,e,f,g,h};
Banque BHT("banque LDNR", "150 Rue de la Découverte, 31670 Labège",Liste);


/*~~~~~~~~~~Menu~~~~~~~~~~*/
int choice;
Clear();

  while (true) {
    cout << "\n================================\n";
    cout << "1- Gestion d'adherent" << endl;
    cout << "2- Effectuer une transaction" << endl;
    cout << "3- A propos" << endl;
    cout << "0- Quitter" << endl;
    cout << "================================\n";
    cout << "Veuillez choisir une option : ";
    cin >> choice;
  
    switch (choice) {
      case 1: Clear();{
        int subChoice;
        while (true) {
          
          cout <<    "\n================================\n"
                     "1- Formater et ajouter tous les adherents\n"
                     "2- Ajouter un adherent\n"
                     "3- Modifier l'adresse d'un adherent\n"
                     "4- Afficher toute la liste des adherents \n"
                     "5- Consulter info d'un compte\n"
                     "0- Retour au menu principal\n"
                     "================================\n"
                     "Choix : ";
          cin >> subChoice;
          

          switch (subChoice) {
            case 1:Clear();
                    BHT.SaisirA();ok();
              break;
            case 2:
                    cout<<"Vous aller ajouter cet adherent a la banque"<<endl;
                    nv.Afficher();
                    BHT.Ajouter(nv);
                    ok();Clear();
              break;
            case 3:
                    BHT.Modifier_Adresse_Adh();
                    ok();Clear();
              break;
            case 4:
                    BHT.AfficherA();ok();Clear();
              break;
            case 5:
                    BHT.chercher_Adh();ok();Clear();
              break;
            case 0:
                   cout<< "vous allez etre dirige vers le menu principal"<<endl;ok();Clear();
                   
              break;
            default:
              cout << "Option non valide." << endl;
          }

          if (subChoice == 0) {
            break;
          }
        }
        break;
      }
      while (true) {
      case 2: {Clear();
        
          int choixTransaction;
            cout << "\n================================\n"
                    "1- Depot d argent\n"
                    "2- Retrait d argent\n"
                    "3- Virement\n"
                    "0- Retour au menu principal\n"
                    "================================\n"
                    "Choix : ";
            cin >> choixTransaction;
            Clear();
            switch (choixTransaction) {
            case 1:
            Clear();
                double somme1;
                cout << "Saisir un montant: ";
                do {
                  cin >> somme1;
                  if (somme1<=0){
                    cout << "veillez saisir un montant vallable !!\n";
                  }
                }while(somme1<=0);
                cout<<"saisir le numero du compte: ";
                int num_compte1;
                cin>>num_compte1;
                BHT.Ajout_Argent(num_compte1,somme1);
                cout<<"vous avez effectuer un retrait d'argent\n";ok();Clear();
                
                cout<<"vous avez effectuer un depot d'argent\n";
                
                
              break;
            case 2:
            double somme2;
                cout << "Saisir un montant: ";
                do {
                  cin >> somme2;
                  if (somme2<=0){
                    cout << "veillez saisir un montant vallable !!\n";
                  }
                }while(somme2<=0);
                cout<<"saisir le numero du compte: ";
                int num_compte2;
                cin>>num_compte2;
                BHT.retrait_Argent(num_compte2,somme2);
                cout<<"vous avez effectuer un retrait d'argent\n";ok();Clear();
                
              break;
            case 3:Clear();
                // Virement
                ok();Clear();
                
              break;
            case 0:Clear();
              // Retourner au menu précédent
              break;
            default:
              cout << "Option non valide." << endl;
          }
        if (choixTransaction == 0) {
            break;
          }
        }
        
      }
      case 3:
        {
          Clear();
        cout<<"saisir le mot de passe: ";
        int mdp,i=0;
        
        do{
          cin>>mdp;
          if (!(BHT.verifier_mdp(mdp)))
          {
            cout<<"erreur, mot de passe eroné\nil vous reste "<< 3-i<< " tentative(s) : ";
          }
          i++;
          }while(!(BHT.verifier_mdp(mdp))&& i<4);
        if((BHT.verifier_mdp(mdp))){
          BHT.Afficher_banque_liste_adh_fichier();
          cout<< "Vous venez d'exporter la liste des adherents dans un fichier xls\n";
        }
        else{
          cout << "Vous avez saisi un mot de passe errone 4 fois, merci de contacter notre service client"<<endl;
          
        }
        ok();Clear();
        break;
        }
      case 0:Clear();
        // Quitter le programme
        return 0;
      default:
        cout << "Option non valide." << endl;
    }
  }
    return 0;
}