// BanqueVS.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.



// CHAIMAE BOUGATTAYA 
// ILISI2 
// FSTM

#include <iostream>
#include "Compte.h"
using namespace std;
int main()
{

    cout << "\t*************** Hello World! *************** \n\n";
    char nom[] = "User1 user1";
    char nom2[] = "chaimae bougattaya";

    // le compte A ( 50003 , "User1 user1" , 80050.175)

    Compte A(50003, nom , 80050.175);
    A.consulterSolde();
    
    cout << "\n  déposer 12000MAD dans le compte A \n";
    A.deposerArgent(12000);
    A.consulterSolde();
    
    cout << "\n  retirer 12000MAD du compte A \n\n";

    A.retirerArgent(12000);
    A.consulterSolde();

    /// le compte B ( 18092000 , "chaimae bougattaya" , 2500 MAD )
    Compte B(18092000, nom2, 2500);
    B.consulterSolde();

    cout << "Transférer 100 MAD de A vers le compte B \n\n\n";

    B = A.transfererArgent(B, 100);

    A.consulterSolde();
    B.consulterSolde();
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
