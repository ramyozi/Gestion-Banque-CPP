/*
 * main.cpp
 *
 */

#include "Adherent.h"
#include "Banque.h"
#include "Personne.h"
#include "Compte_E_L.h"
#include "Compte_livre_A.h"
#include "Compte_Bloque.h"
#include "Compte_Courant.h"
#include "Compte.h"
#include "Date.h"

void Clear()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");

#endif
}


int main()
{

<<<<<<< HEAD
Adherent a(111, 21212.2, "compte courant",{1,1,2023}, "Ali", "Baba", {1,1,2000}, "19 rue XXXX 31000","toto31@gmail.com", "0775754875");
Adherent b(222, 12.2, "livret A",{1,1,2023}, "chris", "bibi", {1,1,2010}, "68 rue XXXX 31000","toto34@gmail.com", "0754849999");
Adherent c(333, 3222.2, "compte bloque",{1,1,2023}, "titt", "Baba", {1,1,1989}, "26 rue XXXX 31000","toto24@gmail.com", "0756452222");
Adherent d(444, 100002.2, "epargne logement",{1,1,2023}, "cola", "hola", {1,1,1965}, "20 rue XXXX 31000","toto45@gmail.com", "0711111875");
Adherent e(555, 21212.2, "compte courant",{1,1,2023}, "Ali", "Baba", {1,1,2000}, "19 rue XXXX 31000","toto31@gmail.com", "0775754875");
Adherent f(666, 12.2, "livret A",{1,1,2023}, "chris", "bibi", {1,1,2010}, "68 rue XXXX 31000","toto34@gmail.com", "0754849999");
Adherent g(777, 3222.2, "compte bloque",{1,1,2023}, "titt", "Baba", {1,1,1989}, "26 rue XXXX 31000","toto24@gmail.com", "0756452222");
Adherent h(888, 100002.2, "epargne logement",{1,1,2023}, "cola", "hola", {1,1,1965}, "20 rue XXXX 31000","toto45@gmail.com", "0711111875");

Adherent nv(555, 0.2, "epargne logement",{1,1,2023}, "harry", "potter", {1,1,2002}, "barbes","marabou@gmail.com", "0111111111");
=======
Adherent a(246, 21212.2, "compte courant",{1,1,2023}, "Ali", "Baba", {1,1,2000}, "19 rue XXXX 31000","toto31@gmail.com", "0775754875");
Adherent b(133, 12.2, "livret A",{1,1,2023}, "chris", "bibi", {1,1,2010}, "68 rue XXXX 31000","toto34@gmail.com", "0754849999");
Adherent c(231, 3222.2, "compte bloque",{1,1,2023}, "titt", "Baba", {1,1,1989}, "26 rue XXXX 31000","toto24@gmail.com", "0756452222");
Adherent d(178, 100002.2, "epargne logement",{1,1,2023}, "cola", "hola", {1,1,1965}, "20 rue XXXX 31000","toto45@gmail.com", "0711111875");
Adherent nv(911, 0.2, "epargne logement",{1,1,2023}, "harry", "potter", {1,1,2002}, "barbes","marabou@gmail.com", "0111111111");
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a


vector <Adherent> Liste{a,b,c,d,e,f,g,h};
Banque BHT("banque OCCTN", "Les minimes 31000",Liste);


<<<<<<< HEAD
/*~~~~~~~~~~Menu~~~~~~~~~~*/
=======
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
int choice;
Clear();

  while (true) {
<<<<<<< HEAD
=======
    cout << "======================================\n";
    cout << "Menu principal :\n";
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
    cout << "1- Gestion d'adherent" << endl;
    cout << "2- Effectuer une transaction" << endl;
    cout << "3- A propos" << endl;
    cout << "0- Quitter" << endl;
<<<<<<< HEAD
=======
    cout << "======================================\n";
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
    cout << "Veuillez choisir une option : ";
    cin >> choice;
    Clear();
    switch (choice) {
      case 1: {
        int subChoice;
        while (true) {
<<<<<<< HEAD
          
          cout << "1- Formater et ajouter tous les adherents\n"
                     "2- Ajouter un adherent\n"
                     "3- Modifier l'adresse d'un adherent\n"
                     "4- Afficher toute la liste des adherents \n"
                     "5- Consulter info d'un compte\n"
                     "0- Retour au menu principal\n"
                     "Choix : ";
          cin >> subChoice;
          
=======
          cout <<   "======================================\n"
                    "1- Formater et ajouter tous les adhérents\n"
                    "2- Ajouter un adherent\n"
                    "3- Modifier l'adresse d'un adherent\n"
                    "4- Afficher toute la liste des adherents \n"
                    "5- Consulter info d'un compte\n"
                    "0- Retour au menu principal\n"
                    "======================================\n"
                    "Choix : ";
          cin >> subChoice;
          Clear();
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a

          switch (subChoice) {
            case 1:
                    BHT.SaisirA(Liste);
              break;
            case 2:
                    cout<<"Vous aller ajouter cet adherent a la banque"<<endl;
                    nv.Afficher();
                    BHT.Ajouter(nv);
              break;
            case 3:
                    BHT.Modifier_Adresse_Adh();
                    
              break;
            case 4:
                    BHT.AfficherA(Liste);
              break;
            case 5:
                    BHT.chercher_Adh();
              break;
            case 0:
                   cout<< "vous allez etre dirige vers le menu principal"<<endl;
              break;
            default:
              cout << "Option non valide." << endl;
          }

          if (subChoice == 0) {
<<<<<<< HEAD
            break;
          }
        }
        break;
      }
      while (true) {
      case 2: {
        
          int choixTransaction;
            cout << "1- Depot d argent\n"
                        "2- Retrait d argent\n"
                        "3- Virement\n"
                        "0- Retour au menu principal\n"
                        "Choix : ";
            cin >> choixTransaction;
            Clear();
            switch (choixTransaction) {
            case 1:
                cout<<"vous avez effectuer un depot d'argent\n";
                
              break;
            case 2:
                cout<<"vous avez effectuer un retrait d'argent\n";
                
              break;
            case 3:
                // Virement
                
              break;
            case 0:
              // Retourner au menu précédent
              break;
            default:
              cout << "Option non valide." << endl;
          }
        if (choixTransaction == 0) {
            break;
          }
        }
        
=======
            break;
          }
        }
        break;
      }
      while (true) {
      case 2: {
        Clear();
          int choixTransaction;
            cout << "======================================\n"
                    "1- Depot d argent\n"
                    "2- Retrait d argent\n"
                    "3- Virement\n"
                    "0- Retour au menu principal\n"
                    "======================================\n"
                    "Choix : ";
            cin >> choixTransaction;
            Clear();
            switch (choixTransaction) {
            case 1:
                cout<<"vous avez effectuer un depot d'argent\n";
                Clear();
              break;
            case 2:
                cout<<"vous avez effectuer un retrait d'argent\n";
                Clear();
              break;
            case 3:
                // Virement
                Clear();
              break;
            case 0:
              // Retourner au menu précédent
              break;
            default:
              cout << "Option non valide." << endl;
          }
        if (choixTransaction == 0) {
            break;
          }
        }
        break;
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
      }
      case 3:
        Clear();
        BHT.Afficher_banque_liste_adh_fichier();
        cout<< "Vous venez d'exporter la liste des adherents dans un fichier xls\n";
        Clear();
        break;
      case 0:
        // Quitter le programme
        return 0;
      default:
        cout << "Option non valide." << endl;
    }
  }
<<<<<<< HEAD
    return 0;
=======
return 0;
>>>>>>> 5d7c064ef5311f8be3dbd36455ff5aebc7effb7a
}