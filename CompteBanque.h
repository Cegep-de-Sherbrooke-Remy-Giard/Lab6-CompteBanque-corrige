#pragma once

#include "Cheque.h"
#include "CarteDeCredit.h"
#include "TransfertInterac.h"

class CompteBanque
{
private:
	int _solde;

public:
	CompteBanque(const int code);

	int getSolde() const;
	void reduire(Cheque cheque);

	// int
	CompteBanque& operator += (const int montant);

	// cheque
	CompteBanque& operator += (const Cheque& cheque);
	CompteBanque& operator -= (const Cheque& cheque);
	bool operator >= (const Cheque& cheque);

	// carte de credit
	CompteBanque& operator -= (const CarteDeCredit& carte);
	bool operator > (const CarteDeCredit& carte);

	// transfert interac
	CompteBanque& operator -= (const TransfertInterac& transfert);
	CompteBanque& operator += (const TransfertInterac& transfert);

	// compte de banque
	bool operator < (const CompteBanque& compte);
};

CompteBanque operator + (const CompteBanque& compte1, const CompteBanque& compte2);
