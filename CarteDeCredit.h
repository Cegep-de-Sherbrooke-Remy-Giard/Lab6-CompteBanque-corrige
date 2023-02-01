#pragma once
class CarteDeCredit
{
private: 
	int _solde;

public: 
	CarteDeCredit(const int solde);

	int getSolde() const;

	CarteDeCredit& operator = (const int montant);
};

