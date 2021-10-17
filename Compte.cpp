#include"Compte.h"
#include<string.h>
#include<iostream>
using namespace std;

//********************************** les méthodes **********************************************/

Compte::Compte(long int numCompte, char nomProprietaire[30], double solde)
{
    this->numCompte = numCompte;
    this->solde = solde;
    strcpy_s(this->nomProprietaire, nomProprietaire);

}

bool Compte::retirerArgent(double solde)
{
    if (this->solde >= solde)
    {
        this->solde = this->solde - solde;
        return true;
    }
    return false;
}


void Compte::deposerArgent(double solde)
{
    this->solde = double(this->solde) + double(solde);
    //return *this;
}

void Compte::consulterSolde()
{
    cout << "Hello " << this->nomProprietaire ;
    cout << " , Voila les infos de votre Compte : " << endl;
    cout << "\t ->Numero est : " << this->numCompte << endl;
    cout << "\t ->le solde est : " << this->solde << " MAD" << endl << endl << endl;
}


Compte Compte::transfererArgent(Compte C , double somme)
{
    C.solde = C.solde + somme;
    this->solde = this->solde - somme;
    return C;
}