#pragma once
class Compte
{
private:
	long int numCompte;
	char nomProprietaire[30];
	double solde;

public:
	Compte(long int numCompte, char nomProprietaire[30], double solde);
	bool retirerArgent(double solde);
	void deposerArgent(double solde);
	void consulterSolde(); // afficher le solde
	Compte transfererArgent(Compte C ,double somme);

};

