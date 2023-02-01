#include "CarteDeCredit.h"

CarteDeCredit::CarteDeCredit(const int solde) : _solde(solde) {
}

int CarteDeCredit::getSolde() const
{
	return _solde;
}

CarteDeCredit& CarteDeCredit::operator=(const int montant)
{
	_solde = montant;
	return *this;
}
