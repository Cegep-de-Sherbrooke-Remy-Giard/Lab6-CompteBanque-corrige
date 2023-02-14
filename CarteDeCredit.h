#pragma once

#include <iostream>

class CarteDeCredit
{
private: 
	int _solde;

public: 
	CarteDeCredit(const int solde);

	int getSolde() const;

	void operator = (const int montant);
};

std::ostream& operator << (std::ostream& flux, const CarteDeCredit& carte);