#pragma once

class Cheque
{
private: 
	int _montant;

public:
	Cheque(const int montant);

	int getMontant() const;
};

