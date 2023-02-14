#pragma once

#include <iostream>

class Cheque
{
private: 
	int _montant;

public:
	Cheque(const int montant);

	int getMontant() const;
};

std::ostream& operator << (std::ostream& flux, const Cheque& cheque);