#pragma once

#include "Cheque.h"
#include "CarteDeCredit.h"
#include "TransfertInterac.h"

#include <iostream>

class CompteBanque
{
private:
	int _solde;

public:
	CompteBanque(const int code);

	int getSolde() const;

	CompteBanque& operator += (const int montant);
	CompteBanque& operator += (const Cheque& cheque);
	CompteBanque& operator -= (const Cheque& cheque);
	CompteBanque& operator -= (const CarteDeCredit& carte);
	CompteBanque& operator -= (const TransfertInterac& transfert);
	CompteBanque& operator += (const TransfertInterac& transfert);

	friend std::ostream& operator << (std::ostream& flux, const CompteBanque& compte);
	friend std::istream& operator >> (std::istream& flux, CompteBanque& compte);
};

CompteBanque operator + (const CompteBanque& compte1, const CompteBanque& compte2);
bool operator >= (const CompteBanque& compte, const Cheque& cheque);
bool operator > (const CompteBanque& compte, const CarteDeCredit& carte);
bool operator < (const CompteBanque& a, const CompteBanque& b);
