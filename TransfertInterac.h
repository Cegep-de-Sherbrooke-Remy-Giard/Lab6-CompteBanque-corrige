#pragma once

#include <iostream>

class TransfertInterac
{
private:
	int _montant;

public: 
	TransfertInterac(const int montant);

	int getMontant() const;
};

std::ostream& operator << (std::ostream& flux, const TransfertInterac& transfert);